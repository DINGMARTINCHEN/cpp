#include <iostream>
#include <queue>
using namespace std;
typedef short int si;//本题最大可能出现的数为4000，用short int 完全可以
const si maxn = 2001;
si ans,n,m;
si dx[4]={0,0,1,-1},dy[4]={1,-1,0,0};
bool vis[maxn][maxn];
struct node
{
    si x,y;//存坐标
    char t;//字符
    si num;//该坐标能炸到的僵尸数量
} s[maxn*(maxn+1)+1];//线性表示坐标，为方便处理，选择1到n不是0到n-1读入，这里稍微扩大
node now,nt;
queue<node>q;
void bfs(si x,si y)//广搜
{
    vis[x][y]=true;
    now = s[x*maxn+y];//提取对应坐标的所有信息
    q.push(now);
    while(!q.empty())
    {
        now = q.front();
        for(si i = 0;i<4;i++)
        {
            si nx = now.x + dx[i];
            si ny = now.y + dy[i];
            if(nx<1||nx>n||ny<1||ny>m||s[nx*maxn+ny].t!='.'||vis[nx][ny])continue;
            else
            {
                vis[nx][ny] = true;
                q.push(s[nx*maxn+ny]);//压入下一个坐标的所有信息
            }
        }
        q.pop();
    }
}
int main()
{
    si x,y,i,j,k;
    cin>>n>>m>>x>>y;
    for(i = 1; i<=n; i++)
        for(j = 1; j<=m; j++)
        {
            s[i*maxn+j].x = i;//横坐标
            s[i*maxn+j].y = j;//纵坐标
            cin>>s[i*maxn+j].t;//坐标对应字符
        }
    si sum=0;//下面是预处理，分横向纵向两次
    //从左往右，碰到墙就结束该次炸到的僵尸数量统计
    for(i = 1;i<=n;i++)
    {
        for(j = 1;j<=m;j++)
        {
            if(s[i*maxn+j].t!='#')//
            {
                if(s[i*maxn+j].t=='G')
                sum++;
            }
            else
            {
                for(k = j-1;k>=1&&s[i*maxn+k].t!='#';k--)//僵尸数量赋值给僵尸点已经空点（僵尸会挡路，但无妨）
                {
                    s[i*maxn+k].num = sum;
                }
                sum = 0;
            }
        }
    }
    //纵向同理
    for(j = 1;j<=m;j++)
    {
        for(i = 1;i<=n;i++)
        {
            if(s[i*maxn+j].t!='#')
            {
                if(s[i*maxn+j].t=='G')
                sum++;
            }
            else
            {
                for(k = i-1;k>=1&&s[k*maxn+j].t!='#';k--)
                {
                   s[k*maxn+j].num += sum;
                }
                sum = 0;
            }
        }
    }
    bfs(x,y);
    for(i = 1;i<=n;i++)
    {
        for(j = 1;j<=m;j++)
        {
            if(vis[i][j]&&ans<s[i*maxn+j].num)ans=s[i*maxn+j].num;//能走到并炸到更多就更新答案
        }
    }
    cout<<ans;
    return 0;
}

