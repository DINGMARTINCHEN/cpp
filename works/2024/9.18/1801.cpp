#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int key,n,a[10010];

void half()
{
    int l=1,r=n;
    int mid=(r+l)/2;
    while(l<=r)
    {
        if(key==a[mid])
        {
            cout<<mid;
            return ;
        }
        else if(key<a[mid])
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    
    cout<<-1;
}

signed main() 
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>key;
    half();
    return 0;
}