#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
ll a[503][503];
int main() 
{
    int n,m;
    ll k=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            a[i][j]=k;k++;
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int x,y,r,z;
        cin>>x>>y>>r>>z;
        if(z==0&&r==1)//À≥ ±’Î
        {
            ll temp=a[x-1][y-1];//1
            a[x-1][y-1]=a[x][y-1];//6
            a[x][y-1]=a[x+1][y-1];//11
            a[x+1][y-1]=a[x+1][y];//12
            a[x+1][y]=a[x+1][y+1];//13
            a[x+1][y+1]=a[x][y+1];//8
            a[x][y+1]=a[x-1][y+1];//3
            a[x-1][y+1]=a[x-1][y];//2
            a[x-1][y]=temp;
        }
        if(z==1&&r==1)//ƒÊ ±’Î
        {
            ll temp=a[x-1][y-1];//1
            a[x-1][y-1]=a[x-1][y];//2
            a[x-1][y]=a[x-1][y+1];//3
            a[x-1][y+1]=a[x][y+1];//8
            a[x][y+1]=a[x+1][y+1];//13
            a[x+1][y+1]=a[x+1][y];//12
            a[x+1][y-1]=a[x+1][y-1];//11
            a[x+1][y-1]=a[x][y-1];//6
            a[x][y-1]=temp;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


// 1  2  3  4  5
// 6  7  8  9  10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25


5 4


4 4 1 0
3 3 2 1


2 2 1 0
// 6  1  2  4  5
// 11 7  3  9  10
// 12 13 8  14 15
// 16 17 18 19 20
// 21 22 23 24 25


3 3 1 1
