#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w[10005],v[10005],f[10005],c[10005];
    int m,n;
    cin>>m>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>w[i]>>c[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=m;j>=w[i];j--)
        {
            if(f[j-w[i]]+c[i]>f[j])
            {
                f[j]=f[j-w[i]]+c[i];
            }
        }
    }
    cout<<f[m];
	return 0;
 } 