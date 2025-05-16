#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector <int> a1(n+1,0);
    map <int,int> p,cnt;
    map <int,map<int,int>> mp;
    for(int i=1;i<=n;i++)
    {
        cin>>a1[i];
        p[a1[i]]=-1;
    }
    int ans=0;
    set <int> q;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        if(p[a]==-1&&p[b]==-1){
             ans++;
        }
        else if(p[a]!=-1&&p[b]==-1)
        {
            q.insert(a);
            cnt[a]++;
        }
        else if(p[b]!=-1&&p[a]==-1)
        {
            q.insert(b);
            cnt[b]++;
        }
        else{
            q.insert(a);
            q.insert(b);
            mp[a][b]++;
            mp[b][a]=mp[a][b];
        }
    }
    int maxx=0;
    for(auto i:q)
    {
        for(auto j:q)
        {
             int value;
            if(i!=j)
            value = cnt[i]+cnt[j]+mp[i][j]+mp[i][i]+mp[j][j];
            else{
            value = cnt[i]+mp[i][j];
            }
            maxx=max(maxx,value);
        }
    }
    cout<<ans+maxx<<"\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
