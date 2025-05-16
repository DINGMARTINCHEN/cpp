#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int b[4];
    int a[4][25];
    for(int i=0;i<4;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<b[i];j++)
        {
            cin>>a[i][j];
            
        }
    }
    return 0;
}
