#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

void process(int a[],int n,int b)
{
    int pos=lower_bound(a,a+n,b)-a,pos1=upper_bound(a,a+n,b)-a-1;
    if(pos==n)
    {
        cout<<"-1 -1\n";
        return ;
    }
    cout<<pos<<" "<<pos1<<endl;
}

signed main() 
{
    int n,m;
    cin>>n>>m;
    int a[100005];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        int b;
        cin>>b;
        process(a,n,b);
    }
    return 0;
}