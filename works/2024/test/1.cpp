#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+50;
const int inf=0x3f3f3f3f;
typedef long long ll;

int n,q;
string a[N];


void solve()
{
    map<string,vector<int> > mp;
    cin>>n>>q;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        sort(a[i].begin(),a[i].end());
        mp[a[i]].push_back(i);
    }
    while(q--)
    {
        int x,y;
        int ans=inf;
        cin>>x>>y;
        if(x==y)
        {
            cout<<0<<"\n";
            continue;
        }
        if(x>y) swap(x,y);
        for(auto i : a[x])
        {
            for(auto j : a[y])
            {
                if(i==j)
                {
                       ans=y-x;
                       break;
                }
                string s="";
                s+=i;
                s+=j;
                if(s[0]>s[1]) swap(s[0],s[1]);
                auto mid=lower_bound(mp[s].begin(),mp[s].end(),x);
                if(mid!=mp[s].end() && *mid<=y) ans=y-x;
                auto l=mid;
                auto r=upper_bound(mp[s].begin(),mp[s].end(),y);
                if(l!=mp[s].begin())
                {
                    l--;
                    ans=min(ans,(x-*l)*2+(y-x));
                }
                if(r!=mp[s].end()) ans=min(ans,(*r-y)*2+(y-x));
            }
        }
        cout<<(ans>=inf ? -1 : ans)<<'\n';
        
    }
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}