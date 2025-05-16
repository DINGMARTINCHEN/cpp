/*
http://10.14.10.74/problem.php?cid=1577&pid=4
//结构体中重载<的运用
//结构体和堆的混用 

题目 
看病(illness)
有个朋友在医院工作，想请 BSNY 帮忙做个登记系统。
具体是这样的，最近来医院看病的人越来越多了，因此很多人要排队，
只有当空闲时放一批病人看病。但医院的排队不同其他排队，
因为多数情况下，需要病情严重的人优先看病，所以希望 BSNY 设计系
统时，以病情的严重情况作为优先级，判断接下来谁可以去看病。

第一行输入 n，表示有 n 个操作。
对于每个操作，首先输入 push 或 pop。
push 的情况，之后会输入 ai 和 b，分别表示患者姓名和患者病情优先级。
pop 后面没有输入，但需要你输出。

对于 pop 的操作，输出此时还在排队人中，优先级最大的患者姓名和优先级。
表示他可以进去看病了。
如果此时没人在排队，那么输出 none，具体可见样例。
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
