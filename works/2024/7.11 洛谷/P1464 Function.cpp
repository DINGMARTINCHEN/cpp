#include<bits/stdc++.h>
using namespace std;

typedef  long long ull;
 long long his[25][25][25];
bool vis[25][25][25];

ull w(ull a,ull b,ull c)
{
    if(a<=0||b<=0||c<=0)
    {
        return 1;
    }
    if(a>20||b>20||c>20)
    {
        return w(20,20,20);
    }
    if(vis[a][b][c]==1)
    {
        return his[a][b][c];
    }
    if(a<b&&b<c)
    {
        his[a][b][c]=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
        vis[a][b][c]=1;
    }
    else
    {
        his[a][b][c]=w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
        vis[a][b][c]=1;
    }
    return his[a][b][c];
}

int main()
{
    ull a,b,c;
    memset(his,0,sizeof(his));
    memset(vis,0,sizeof(vis));
    while(cin>>a>>b>>c)
    {
        if(a==-1&&b==-1&&c==-1)
        {
            break;
        }
		printf("w(%lld, %lld, %lld) = ", a, b, c);
		printf("%lld\n", w(a, b, c));
    }
}