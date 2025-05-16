#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int f[1007],a[1007],k[1007];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int c;
    cin>>c;
    while(c--)
    {
        int n,p,t;
        cin>>n>>p>>t;
        memset(a,0,sizeof a);
        memset(f,0,sizeof f);
        memset(k,0,sizeof k);
        f[0]=1;
        for(int i=0;i<t;i++)
        {
            int play=i%p,x;
            cin>>x;
            f[a[play]]=0;
            if(play!=p-1&&k[play]==0)
            {
                f[a[play]]=1;
                k[play]=1;
            }    
            for(int j=0;j<x;j++)
            {
                a[play]=(a[play]+1)%n;
                while(f[a[play]]==1)
                {
                    a[play]=(a[play]+1)%n;
                }
            }
            f[a[play]]=1;    
        }
        for(int i=0;i<p;i++)
            cout<<a[i]<<endl;
    }
}