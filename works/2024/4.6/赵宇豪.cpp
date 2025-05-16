#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef int Elemtype;
const int MAX = 1e7 + 500;
typedef struct LNode{
	int data;
	int power;
	struct LNode *next;
}LNode,*LinkList;  //�������� 
int n,m;
LinkList LA,LB,LC,LD;
bool Init_LinkList(LinkList &L) //��ʼ������ 
{
	L=(LinkList)malloc(sizeof(Elemtype));
	L->next=NULL;
	return true;
}
bool Create_List_Tail(LinkList &L,int n) //β�巨����Ԫ�� 
{
	int i;
	LinkList p,r;
	r=L;
	for(i=1;i<=n;i++) 
	{
		p=new LNode;
		cin>>p->data>>p->power;
		p->next=NULL;
		r->next=p;
		r=p;
	}
	return true;
}

bool Insert(LinkList &L,int i,Elemtype e) //����e����i��λ�� 
{
	LinkList p=L,s;
	int j=0;
	while(p && j<i-1)
	{
		p=p->next;
		++j;
	}
	if(!p || j>i-1) return false;
	s=new LNode;
	s->data=e;
	s->next=p->next;
	p->next=s;
	return true;
}

bool Delete(LinkList &L,int i) //ɾ����i��Ԫ�� 
{
	LinkList p=L,s;
	int j=0;
	while(p && j<i-1)
	{
		p=p->next;
		j++;
	}
	if(!p || j>i-1) return false;
	s=p->next;
	p->next=s->next;
	return true;
} 

int Length(LinkList p)  //�������� 
{
	int len=0;
	p=p->next;
	while(p)
	{
		len++;
		p=p->next;
	}
	return len;
}

bool Free(LinkList &L)  //������� 
{
	LinkList p=L;
	if(L==NULL) return 0; 
	p=L->next;
	while(p!=NULL)
	{
		free(p);
		p=p->next;
	}
	L->next=NULL;
	return 1;
}

int LocateList(LinkList L,Elemtype e) //����Ԫ��Ϊe��Ԫ���Ƿ���� 
{
	LinkList p;
	p=L->next;
	while(p && p->data!=e)
		p=p->next;
	if(p)return 1;
	else return 0;
}

void traverse(LinkList LC) //����
{
	LinkList p=LC->next;
	if(p)
	{
		if(p->next==NULL)
		{
			cout<<0;
			return;
		}
		cout<<p->data<<"x^"<<p->power;
	}
	p=p->next;
	while(p)
	{
		if(p->data>0)
			cout<<'+'<<p->data<<"x^"<<p->power;
		else cout<<p->data<<"x^"<<p->power;
		p=p->next;
	}	
}

void add(LinkList LA,LinkList LB,LinkList LC)
{
	LinkList p=LA->next,q=LB->next,s,sr=LC;
	while(p&&q)
	{
		s=(LinkList)malloc(sizeof(LNode)); 
		if(p->power<q->power)
		{ 
			s->data=p->data;
			s->power=p->power;
			s->next=NULL;
			sr->next=s;
			sr=s;
			p=p->next; 
		}
		else if(p->power==q->power)
		{
			s->data=p->data+q->data;
			s->power=p->power;
			s->next=NULL;
			sr->next=s;
			sr=s;
			p=p->next;
			q=q->next; 
		}
		else
		{ 
			s->data=q->data;
			s->power=q->power;
			s->next=NULL;
			sr->next=s;
			sr=s;
			q=q->next; 
		}
	}
	if(p){
		s->next=p;
	}
	else{
		s->next=q; 
	}
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Init_LinkList(LA);
    Init_LinkList(LB);
    Init_LinkList(LC);  //��ʼ��LA,LB,LC�� 
	cin>>n;
    Create_List_Tail(LA,n);  //����LA 
    cin>>m;
    Create_List_Tail(LB,m); //����LB 
    add(LA,LB,LC); //���
    traverse(LC);  //���� 
}
