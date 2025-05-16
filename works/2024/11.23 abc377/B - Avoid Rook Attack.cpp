#include <bits/stdc++.h>
#define int long long
using namespace std;

int x[8],y[8];

signed main() 
{
    char a[8][8];
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='#')
            {
                x[i]=1;
                y[j]=1;
            }
        }
    }
    int sum=0;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(x[i]==0&&y[j]==0)
            {
                sum++;
            }
        }
    }
    cout<<sum;
    return 0;
}