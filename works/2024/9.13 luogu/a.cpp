#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int n;
    cin>>n;
    int a[n+1][n+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cin>>a[i][j];
        }
    }
    int temp=a[1][1];
    for(int i=1;i<=n;i++)
    {
        if(temp<=i)
        {
            temp=a[i][temp];
        }
        else
        {
            temp=a[temp][i];
        }
    }
    cout<<temp;
    return 0;
}
/*
4

3
2 4
3 1 2
2 1 2 4

*/