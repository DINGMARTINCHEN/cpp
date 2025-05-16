#include <iostream>
#include <queue>
using namespace std;
typedef short int si;//���������ܳ��ֵ���Ϊ4000����short int ��ȫ����
const si maxn = 2001;
si ans,n,m;
si dx[4]={0,0,1,-1},dy[4]={1,-1,0,0};
bool vis[maxn][maxn];
struct node
{
    si x,y;//������
    char t;//�ַ�
    si num;//��������ը���Ľ�ʬ����
} s[maxn*(maxn+1)+1];//���Ա�ʾ���꣬Ϊ���㴦��ѡ��1��n����0��n-1���룬������΢����
node now,nt;
queue<node>q;
void bfs(si x,si y)//����
{
    vis[x][y]=true;
    now = s[x*maxn+y];//��ȡ��Ӧ�����������Ϣ
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
                q.push(s[nx*maxn+ny]);//ѹ����һ�������������Ϣ
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
            s[i*maxn+j].x = i;//������
            s[i*maxn+j].y = j;//������
            cin>>s[i*maxn+j].t;//�����Ӧ�ַ�
        }
    si sum=0;//������Ԥ�����ֺ�����������
    //�������ң�����ǽ�ͽ����ô�ը���Ľ�ʬ����ͳ��
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
                for(k = j-1;k>=1&&s[i*maxn+k].t!='#';k--)//��ʬ������ֵ����ʬ���Ѿ��յ㣨��ʬ�ᵲ·�����޷���
                {
                    s[i*maxn+k].num = sum;
                }
                sum = 0;
            }
        }
    }
    //����ͬ��
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
            if(vis[i][j]&&ans<s[i*maxn+j].num)ans=s[i*maxn+j].num;//���ߵ���ը������͸��´�
        }
    }
    cout<<ans;
    return 0;
}

