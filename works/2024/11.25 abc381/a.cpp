#include<bits/stdc++.h>
using namespace std;
const int N=105;
int n;
string s;

void solve()
{
    cin>>n>>s;
    bool st=1;
    if(n%2==0) st=0;
    for(int i=1;i<=(n+1)/2-1;i++) if(s[i-1]!='1') st=0;
    if(s[(n+1)/2-1]!='/') st=0;
    for(int i=(n+1)/2+1;i<=n;i++) if(s[i-1]!='2') st=0;
    if(st) cout<<"Yes\n";
    else cout<<"No\n";
}
int main()
{
    solve();
    return 0;
}
