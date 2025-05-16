#pragma GCC optimize(1)
#pragma GCC optimize(2)
#pragma GCC optimize(3,"Ofast","inline")
#include <bits/stdc++.h>

using namespace std;
typedef int Elemtype;
typedef struct LinkNode{
	Elemtype data;
	struct LinkNode *next;
}LNode,*LinkList;

bool intit_LinkList(LinkList &L)
{	//创建并且初始化只有头结点的单链表 
	L=(LinkNode *)malloc(sizeof(LNode));
	if(L==NULL)
	{
		return false;
	}
	L->next=NULL;
	return true;
}
bool insert_LinkList(LinkList &L,LNode *p,Elemtype e)
{
	LNode *s;
	s=(LinkNode *)malloc(sizeof(LNode));
	if(s==NULL) return false;
	s->data=e;
	s->next=p->next;
	p->next=s;
	return true;
}
bool create_LinkList_Head(LinkList &L)
{
	int n;
	bool flag;
	Elemtype e;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>e;
		flag=insert_LinkList(L,L,e);
		if(flag==false) return false;
	}
	return true;
}
void traverase(LinkList L)
{
	LNode *p;
	p=L->next;
	while(p)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
}


int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0); 
	LinkList LL;
	intit_LinkList(LL);
	create_LinkList_Head(LL);
	traverase(LL);
}
