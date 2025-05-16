#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;
#define INF 0x3f3f3f3f
const int maxx=1e3+7;
int G[maxx][maxx];//存图数组
int path[maxx][maxx];//path[i][j]记录从i到j经过了那个点过来的
int n,m;//分别表示定点个数和边的个数
void init()
{
    memset(G,INF,sizeof G);//初始化数组
    memset(path,-1,sizeof path);
    for(int i=0;i<maxx;i++)//到自己的距离为0
        G[i][i]=0;
}
void Floyd()
{                          //三重循环
    for(int k=1;k<=n;k++){ //选中的中间值 
        for(int i=1;i<=n;i++){ //数组横坐标
            for(int j=1;j<=n;j++){ //数组纵坐标 
                if(G[i][j]>G[i][k]+G[k][j]){    //如果以k中间点为中间点检测到路径更短 
                    G[i][j]=G[i][k]+G[k][j];    //更新路径值
                    path[i][j]=k;   //更新要经过的中间点 
                }
            }
        }
    }
}
int main()
{
    while(scanf("%d %d",&n,&m)&&n&&m)
    {
        init();//初始化
        int x,y,z;
        for(int i=0;i<m;i++)
        {
            scanf("%d %d %d",&x,&y,&z);
            G[x][y]=z,G[y][x]=z;
        }
        Floyd();
        printf("%d\n",G[1][n]);//输出点1到点n的最短距离
    }
    return 0;
}



