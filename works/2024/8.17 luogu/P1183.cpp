#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int a[405][405];

signed main() 
{
    memset(a,0,sizeof a);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        a[x+200][y+200]=1;
    }
    dfs()
    return 0;
}