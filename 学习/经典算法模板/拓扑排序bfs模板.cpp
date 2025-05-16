#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n;//�ڵ����
int d[10005];//���
vector<int> v[10005];//vector��ͼ�������ҵ����ڽڵ�
int cur, ans[10005];//������ʹ�����

void topusort()//��������ĺ���
{
	queue<int> q;//���Ϊ0�Ķ���
	for (int i = 1; i <= n; i++)//�����Ϊ0�Ľڵ�������
		if (d[i] == 0)
			q.push(i);
	while (!q.empty())
	{
		int f=q.front();//ȡ��ͷ���
        ans[++cur]=f;//�����곣�����
		q.pop();//�����˰Ѷ�ͷ����
		for (int i=0;i<v[f].size();i++)//�������ͷ���ڵĽڵ�
		{
			int t=v[f][i];//���ͷ���ڵĽڵ�ı��
			d[t]--;//���-1
			if (d[t] == 0)//���Ϊ0�����
				q.push(t);
		}
	}
}

int main()
{
    //����
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
        //xҪ��y֮ǰ��ɣ���Ҫ��һ����x��y�ı�
		int x, y;
        cin >> x >> y;
        d[y]++;
        v[x].push_back(y);
	}
	topusort();//������������ĺ���
    if (cur != n) //���������Ӧ����n���ڵ�
        printf("ͼ���л����޷������������򣡣���\n");
    else
    {
        printf("�������������У�");
        for (int i = 1; i <= cur; i++)
            printf("%d ", ans[i]);
        cout<<"\n"; //����
    }
	return 0;
}