/*
http://10.14.10.74/problem.php?cid=1577&pid=4
//�ṹ��������<������
//�ṹ��ͶѵĻ��� 

��Ŀ 
����(illness)
�и�������ҽԺ���������� BSNY ��æ�����Ǽ�ϵͳ��
�����������ģ������ҽԺ��������Խ��Խ���ˣ���˺ܶ���Ҫ�Ŷӣ�
ֻ�е�����ʱ��һ�����˿�������ҽԺ���ŶӲ�ͬ�����Ŷӣ�
��Ϊ��������£���Ҫ�������ص������ȿ���������ϣ�� BSNY ���ϵ
ͳʱ���Բ�������������Ϊ���ȼ����жϽ�����˭����ȥ������

��һ������ n����ʾ�� n ��������
����ÿ���������������� push �� pop��
push �������֮������� ai �� b���ֱ��ʾ���������ͻ��߲������ȼ���
pop ����û�����룬����Ҫ�������

���� pop �Ĳ����������ʱ�����Ŷ����У����ȼ����Ļ������������ȼ���
��ʾ�����Խ�ȥ�����ˡ�
�����ʱû�����Ŷӣ���ô��� none������ɼ�������
*/
#include <bits/stdc++.h>
#define fastin ios::sync_with_stdio(0);cin.tie(0),cout.tie(0)
using namespace std;

typedef long long ll; 
const int N=2e5+50;

int n;
struct node{
	int own;
	string name;
	node(string a,int b):name(a),own(b) { };
	node() { };
	bool operator < (const node &temp) const{
		return own<temp.own;
	}
};


priority_queue<node> q;


int main()
{
	fastin;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		string s;
		cin>>s;
		if(s=="pop")
		{
			if(q.empty()) cout<<"none\n";
			else
			{
				cout<<q.top().name<<' '<<q.top().own<<'\n';
				q.pop();
			}
		}
		else
		{
			string names;
			int prio;
			cin>>names>>prio;
			q.push(node(names,prio));
		}
	}
}
