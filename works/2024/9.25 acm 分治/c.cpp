#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+10;
int m,n,x,a[maxn];
int main(){
    cin>>m>>n;
    a[0]=-1;
    for(int i=1;i<=m;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        cin>>x;
        int l=1,r=m,mid;
        while(l<=r){
            mid=l+(r-l)/2;
            if(a[mid]>x){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        cout<<a[r]<<endl;
    }
    return 0;
}