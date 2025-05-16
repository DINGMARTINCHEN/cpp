#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[40][40];
    int x[1600],y[1600];
    // int a[n+1][n+1];为什么不能用？？？？？

    // int x[n+1],y[n+1];
    memset(x,0,sizeof(x));
    memset(y,0,sizeof(y));
    memset(a,0,sizeof(a));
    for(int i=0;i<=n;i++)
    {
        a[0][i]=260408;
        a[i][0]=260408;
    }
    x[1]=1;
    y[1]=(n+1)/2;
    a[1][(n+1)/2]=1;
    for(int i=2;i<=n*n;i++)
    {
        if(x[i-1]==1&&y[i-1]!=n)//1
        {
            x[i]=n;
            y[i]=y[i-1]+1;
            a[x[i]][y[i]]=i;
        }
        else if(y[i-1]==n&&x[i-1]!=1)//2
        {
            y[i]=1;
            x[i]=x[i-1]-1;
            a[x[i]][y[i]]=i;
        }
        else if(x[i-1]==1&&y[i-1]==n)//3
        {
            x[i]=x[i-1]+1;
            y[i]=y[i-1];
            a[x[i]][y[i]]=i;
        }
        else if(x[i-1]!=1&&y[i-1]!=n)//4
        {
            if(a[x[i-1]-1][y[i-1]+1]==0)
            {
                x[i]=x[i-1]-1;
                y[i]=y[i-1]+1;
                a[x[i]][y[i]]=i;
            }
            else
            {
                x[i]=x[i-1]+1;
                y[i]=y[i-1];
                a[x[i]][y[i]]=i;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}