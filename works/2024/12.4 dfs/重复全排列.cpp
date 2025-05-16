#include <bits/stdc++.h>
#define int long long
using namespace std;

int ans;
int a[505];
char b[505];
int n;

void print()
{
    ans++;
    for(int i=1;i<=n;i++)
    {
        cout<<b[i];
    }
    cout<<endl;
}

void dfs(int t)
{
    for(int i=1;i<=256;i++)
    {
        if(a[i]>0)
        {
            b[t]=i+96;
            a[i]--;
            if(t==n)
            {
                print();
            }
            dfs(t+1);
            a[i]++;
        }
    }
}

signed main() 
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        a[b[i]-96]++;
    }
    dfs(1);
    cout<<ans;
    return 0;
}