#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

char a[730][730];

void dfs(int n,int x,int y)
{
    if(n==1)
    {
        a[x][y]='X';
    }
    else
    {
        int m=pow(3,n-2);
        dfs(n-1,x,y);
        dfs(n-1,x+2*m,y);
        dfs(n-1,x,y+2*m);
        dfs(n-1,x+m,y+m);
        dfs(n-1,x+2*m,y+2*m);
    }
    
}

int main() 
{
    int n;
    while(1)
    {
        cin>>n;
        if(n==-1)
        {
            return 0;
        }
        ofstream outfile("custom_data.txt", ios::app);//追加写入文件          存入记得加入分隔" "
        memset(a,' ',sizeof(a));
        dfs(n,0,0);
        int sum=pow(3,n-1);
        for(int i=0;i<sum;i++)
        {
            for(int j=0;j<sum;j++)
            {
                cout<<a[i][j];
                outfile<<a[i][j];
            }
            cout<<endl;
            outfile<<endl;
        }
        cout<<'-'<<endl;
        outfile<<'-'<<endl;
    }
    return 0;
}