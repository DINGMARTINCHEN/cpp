#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;
#define INF 0x3f3f3f3f
const int maxx=1e3+7;
int G[maxx][maxx];//��ͼ����
int path[maxx][maxx];//path[i][j]��¼��i��j�������Ǹ��������
int n,m;//�ֱ��ʾ��������ͱߵĸ���
void init()
{
    memset(G,INF,sizeof G);//��ʼ������
    memset(path,-1,sizeof path);
    for(int i=0;i<maxx;i++)//���Լ��ľ���Ϊ0
        G[i][i]=0;
}
void Floyd()
{                          //����ѭ��
    for(int k=1;k<=n;k++){ //ѡ�е��м�ֵ 
        for(int i=1;i<=n;i++){ //���������
            for(int j=1;j<=n;j++){ //���������� 
                if(G[i][j]>G[i][k]+G[k][j]){    //�����k�м��Ϊ�м���⵽·������ 
                    G[i][j]=G[i][k]+G[k][j];    //����·��ֵ
                    path[i][j]=k;   //����Ҫ�������м�� 
                }
            }
        }
    }
}
int main()
{
    while(scanf("%d %d",&n,&m)&&n&&m)
    {
        init();//��ʼ��
        int x,y,z;
        for(int i=0;i<m;i++)
        {
            scanf("%d %d %d",&x,&y,&z);
            G[x][y]=z,G[y][x]=z;
        }
        Floyd();
        printf("%d\n",G[1][n]);//�����1����n����̾���
    }
    return 0;
}



