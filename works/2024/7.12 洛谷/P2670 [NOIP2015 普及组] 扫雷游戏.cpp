#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m;
    cin>>n>>m;
string a[109][109];
int b[109][109];
    memset(a,'?',sizeof(a));
    memset(b,0,sizeof(b));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i][j-1]=='*')//1
            {
                b[i][j]++;
            }
            if(a[i][j+1]=='*')//2
            {
                b[i][j]++;
            }
            if(a[i-1][j-1]=='*')//3
            {
                b[i][j]++;
            }
            if(a[i-1][j+1]=='*')//4
            {
                b[i][j]++;
            }
            if(a[i+1][j-1]=='*')//5
            {
                b[i][j]++;
            }
            if(a[i+1][j+1]=='*')//6
            {
                b[i][j]++;
            }
            if(a[i-1][j]=='*')//7
            {
                b[i][j]++;
            }
            if(a[i+1][j]=='*')//8
            {
                b[i][j]++;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]!='*')
            {
                cout<<b[i][j];
            }
            else
            {
                cout<<'*';
            }
        }
        cout<<endl;
    }
}