#include <bits/stdc++.h>
#define int long long
using namespace std;

int a[1010],f[1010],b[1010];

signed main() 
{
    int c,n=0,res=0;
    while(cin>>c)
    {
        a[n++]=c;
    }
    for(int i=1;i<=n;i++)
    {
        f[i]=1;
        for(int j=1;j<i;j++)
        {
            if(a[i]<=a[j])
            {
                f[i]=max(f[i],f[j]+1);
            }
        }
        if(res<f[i])
        {
            res=max(res,f[i]);
        }
    }
    cout<<res<<endl;
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        int k=0;
        while(k<cnt&&b[k]<a[i])
        {
            k++;
        }
        if(k>=cnt)
        {
            cnt++;
        }
        b[k]=a[i];
    }
    cout<<cnt;
    return 0;
}