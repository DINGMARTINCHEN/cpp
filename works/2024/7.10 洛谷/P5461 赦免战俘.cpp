#include<bits/stdc++.h>
using namespace std;

// const int N=1e8;

int a[9999][9999];///// -----------------------¿ª´óµã
void process(int side,int x,int y)
{
    if(side==2)
    {
        a[x][y]=0;
        return;
    }
    for(int i=x;i<=x+side/2-1;i++)
    {
        for(int j=y;j<=y+side/2-1;j++)
        {
            a[i][j]=0;
        }
    }
    process(side/2,x+side/2,y);
    process(side/2,x+side/2,y+side/2);
    process(side/2,x,y+side/2);
}

int main()
{
    int n;
    cin>>n;
    int p=1;
    for(int i=0;i<n;i++)
    {
        p*=2;
    }
    for(int i=1;i<=p;i++)
    {
        for (int j=1;j<=p;j++)   
        {
            a[i][j]=1;
        }
        
    }
    process(p,1,1);
    for(int i=1;i<=p;i++)
    {
        for (int j=1;j<=p;j++)   
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
        
    }
}