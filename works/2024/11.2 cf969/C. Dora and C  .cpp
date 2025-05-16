#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N=1e5+5;

int c[N];

void dsc()
{
    memset(c,0,sizeof(c));
    int n,a,b;
    cin>>n>>a>>b;
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
    sort(c,c+n);
    c[0]+=a,c[1]+=b;
    sort(c,c+n);
    cout<<c[n-1]-c[0]<<endl;
}

signed main() 
{
    int n;
    cin>>n;
    while(n--)
    {
        dsc();
    }
    return 0;
}