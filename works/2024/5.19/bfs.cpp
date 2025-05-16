#include <bits/stdc++.h>
 
using namespace std;
int n;
int ans=0x3f3f3f;
int vis[1005][1005];
int dx[4]={0,0,-1,1};
int dy[4]={-1,1,0,0};
char s;
int sx,sy,ex,ey;
struct node{
    int x,y;
    int step;
};
 
int bfs(int x,int y)
{
    node p,t;
    p.x=x;
    p.y=y;
    p.step=0;
    queue<node> q;
    q.push(p);
    while(!q.empty())
    {
        p=q.front();
        if(p.x==ex && p.y==ey)
        {
            ans=min(ans,p.step);
            break;
        }
        for(int i=0;i<=3;i++)
        {
            t.x=p.x+dx[i];
            t.y=p.y+dy[i];
            if(t.x>=1 && t.x<=n && t.y>=1 && t.y<=n && vis[t.x][t.y]==0)
            {
                vis[t.x][t.y]=1;
                t.step=p.step+1;
                q.push(t);
            }
        }
        q.pop();
    }
}
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("\n");
        for(int j=1;j<=n;j++)
        {
            scanf("%c",&s);
            vis[i][j]=s-'0';
        }
    }
    cin>>sx>>sy>>ex>>ey;
    if(sx==ex && sy==ey)
    {
        cout<<0;
        return 0;
    }
    bfs(sx,sy);
    cout<<ans;
}   