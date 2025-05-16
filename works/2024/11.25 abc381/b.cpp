#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <map>

using namespace std;
typedef long long ll;
const int N=105;
int n;
string s;
map<char,int> H;
void solve()
{
    cin>>s;
    n=s.size();
    bool st=1;
    if(n%2==1) st=0;
    for(int i=1;i<=n/2;i++)
    {
        if(s[2*i-1]!=s[2*i-1-1])
        {
            st=0;
        } 
    } 
    for(int i=0;i<n;i++)
    {
        H[s[i]]++;
    } 
    for(int i=0;i<n;i++)
    { 
        if(H[s[i]]!=2) 
        {
            st=0;
        }
    } 
    if(st==1) cout<<"Yes\n";
    else cout<<"No\n";
}
int main()
{
    solve();
    return 0;
}
/*
sp3 42143 157/3778=0.041556
buj 42083 130/3696=0.035173
ran 42110 93/2573=0.036145
lan 42115  
por       41/1500=0.027333
*/