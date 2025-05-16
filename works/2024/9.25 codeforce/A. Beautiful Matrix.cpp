#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int a;
    int x,y;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin>>a;
            if(a==1)
            {
                x=i,y=j;
            }
        }
    }
    cout<<abs(x-3)+abs(y-3);
    return 0;
}