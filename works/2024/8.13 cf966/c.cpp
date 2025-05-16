#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

void judge(int a[],string s,int n)
{
    if(n!=s.size())
    {
        cout<<"no\n";
        return;
    }
    map<char,int>mp;
    map<int,char>mp1;
    for(int i=0;i<n;i++)
    {
        if(mp.find(s[i])==mp.end()&&mp1.find(a[i])==mp1.end())
        {
            mp[s[i]]=a[i];
            mp1[a[i]]=s[i];
        }
        else
        {
            if(mp[s[i]]==a[i]&&mp1[a[i]]==s[i])
            {
                continue;
            }
            else
            {
                cout<<"no\n";
                return ;
            }
        }
    }
    cout<<"yes\n";
    return ;
}

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        string s;
        judge(a,s,n);
    }
}

signed main() 
{
    int n;
    cin>>n;
    while(n--)
    {
        solve();
    }
    return 0;
}