#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n;//节点个数
int d[10005];//入读
vector<int> v[10005];//vector存图，方便找到相邻节点
int cur, ans[10005];//数组光标和答案数组

void topusort()//拓扑排序的函数
{
	queue<int> q;//入读为0的队列
	for (int i = 1; i <= n; i++)//将入度为0的节点加入队列
		if (d[i] == 0)
			q.push(i);
	while (!q.empty())
	{
		int f=q.front();//取队头结点
        ans[++cur]=f;//数组光标常规操作
		q.pop();//别忘了把队头出队
		for (int i=0;i<v[f].size();i++)//遍历与队头相邻的节点
		{
			int t=v[f][i];//与队头相邻的节点的编号
			d[t]--;//入度-1
			if (d[t] == 0)//入度为0就入队
				q.push(t);
		}
	}
}

int main()
{
    //读入
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
        //x要在y之前完成，就要连一条从x到y的边
		int x, y;
        cin >> x >> y;
        d[y]++;
        v[x].push_back(y);
	}
	topusort();//调用拓扑排序的函数
    if (cur != n) //正常情况下应该有n个节点
        printf("图中有环，无法进行拓扑排序！！！\n");
    else
    {
        printf("拓扑排序后的序列：");
        for (int i = 1; i <= cur; i++)
            printf("%d ", ans[i]);
        cout<<"\n"; //换行
    }
	return 0;
}