#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main() 
{
    ll h,w;
    cin>>h>>w;
    ll pox,poy;
    cin>>pox>>poy;
    char a[h+1][w+1];
    for(ll i=1;i<=h;i++)
    {
        for(ll j=1;j<=w;j++)
        {
            cin>>a[i][j];
        }
    } 
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='U'&&a[pox-1][poy]=='.')
        {
            pox--;
        }
        if(s[i]=='D'&&a[pox+1][poy]=='.')
        {
            pox++;
        }
        if(s[i]=='L'&&a[pox][poy-1]=='.')
        {
            poy--;
        }
        if(s[i]=='R'&&a[pox][poy+1]=='.')
        {
            poy++;
        }
    }
    cout<<pox<<" "<<poy;
    return 0;
}