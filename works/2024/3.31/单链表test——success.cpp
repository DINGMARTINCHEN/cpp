#include<bits/stdc++.h>
using namespace std;
 
typedef int elemtype; 
// typedef string elemtype; 
// typedef char elemtype; 

typedef struct Lnode
{
    elemtype data;
    int power;
    struct Lnode *next; 
}Lnode,*linklist;

void init_linklist(linklist &l)//初始化链表
{
    l=(Lnode *)malloc(sizeof(linklist));
    l->next=NULL;
}

Lnode *getelem_locate(linklist l,int i)//按位查找
{
    int j=1;
    Lnode *p=l->next;
    if(i==0)
    {
        return l;
    }
    while(p!=NULL&&j<i)
    {
        p=p->next;
        j++;
    }
    return p;
}

void insert_linklist(linklist &l,int k,elemtype a)//在第k个后面插入元素
{
    Lnode *p=getelem_locate(l,k);
    Lnode *s=(Lnode *)malloc(sizeof(Lnode));
    s->data=a;
    s->next=p->next;
    p->next=s;
}

int Length(linklist L){
    Lnode *p = L->next;
    int len = 0;
    while(p){
        len++;
        p = p->next;
    }
    return len;
}

void printlinklist(linklist l)//链表元素挨个输出
{
    Lnode *p=l;
    while(p->next!=NULL)
    {
        p=p->next;
        cout<<p->data<<" ";
        // if(p->data==p->next->data)
        // {
        //     continue;
        // }
        // else
        // {
        //     cout<<p->data<<" ";
        // }
    }
}

void head_insert(linklist &l,elemtype n)//首插法
{
    Lnode *s=(Lnode *)malloc(sizeof(Lnode));
    s->data=n;
    s->next=l->next;
    l->next=s;
}

Lnode *getelem_data(linklist l,elemtype n)//按值查找
{
    Lnode *p=l->next;
    while(p!=NULL)
    {
        if(p->data==n)
        {
            return p;
            cout<<p->data;
            return 0;
        }
        p=p->next;
    }
    return p;
}

void tail_insert(linklist &l,elemtype a)//为、尾插法
{
    insert_linklist(l,Length(l),a);
}

void delete_locate_lnode(linklist &l,int k)//按位删除元素
{
    Lnode *p=getelem_locate(l,k-1);
    p->next=p->next->next;
}

void delete_data_lnode(linklist &l,elemtype n)//按数据删除元素
{
    Lnode *p=getelem_data(l,n);
    p->next=p->next->next;
}

void swap_linklist(linklist &l,int k,int i)//第k和第i个元素交换数值
{
    Lnode *p=getelem_locate(l,k);
    Lnode *q=getelem_locate(l,i);
    elemtype temp;
    temp=q->data;
    q->data=p->data;
    p->data=temp;
}

// bool sort_linklist(linklist &l)
// {
//     for(int i=1;i<=Length(l);i++)
//     {
//         for(int j=1;j<=Length(l);j++)
//         {
//             Lnode *p=getelem_locate(l,j);
//             Lnode *q=getelem_locate(l,j+1);
//             if(q->data<q->data)
//             {
//                 swap_linklist(l,j,j+1);
//             }
//         }
//     }
// }

void merge(linklist la,linklist lb,linklist &lc)//两个链表取交集
{
    Lnode *pa,*pb,*pc;
    pa=la->next;
    pb=lb->next;
    pc=lc;
    while(pa!=NULL&&pb!=NULL)
    {
        if(pa->data<=pb->data)
        {
            pc->next=pa;
            pc=pc->next;
            pa=pa->next;
        }
        else
        {
            pc->next=pb;
            pc=pc->next;
            pb=pb->next;
        }
    }
    if(pa!=NULL)
    {
        pc->next=pa;
    }
    else
    {
        pc->next=pb;
    }
}

void union_linklist(linklist la,linklist lb,linklist &lc)//两个链表取并集
{
    Lnode *pa,*pb,*pc;
    pa=la->next;
    pb=lb->next;
    pc=lc;
    while(pa!=NULL&&pb!=NULL)
    {
        if(pa->data<pb->data)
        {
            pc->next=pa;
            pc=pc->next;
            pa=pa->next;
        }
        else if(pa->data==pb->data)
        {
            pc->next=pa;
            pc=pc->next;
            pa=pa->next;
            pb=pb->next;
        }
        else
        {
            pc->next=pb;
            pc=pc->next;
            pb=pb->next;
        }
    }
    if(pa!=NULL)
    {
        pc->next=pa;
    }
    else
    {
        pc->next=pb;
    }
}

void add(linklist LA,linklist LB,linklist LC)
{
	linklist p=LA->next,q=LB->next,s,sr=LC;
	while(p&&q)
	{
		s=(linklist)malloc(sizeof(Lnode)); 
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

void traverse(linklist LC) //遍历
{
	linklist p=LC->next;
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

bool Create_List_Tail(linklist &L,int n) //尾插法插入元素 
{
	int i;
	linklist p,r;
	r=L;
	for(i=1;i<=n;i++) 
	{
		p=new Lnode;
		cin>>p->data>>p->power;
		p->next=NULL;
		r->next=p;
		r=p;
	}
	return true;
}

void combine_linklist(linklist Ll1, linklist Ll2)///链表的有序合并
{   
    linklist C; //指向空表C的头结点的指针（后续构造的新表）
    linklist p = Ll1->next; //指针p始终指向表一中将要判断指针域大小的节点，初始指向表一头结点的后驱节点
    linklist q = Ll2->next; //指针q始终指向表二中将要判断指针域大小的节点，初始指向表二头结点的后驱节点
    linklist r; //指针r始终指向空表C的尾节点，初始指向空表C的头结点
    linklist s; //临时保存指针p或q，可以通过直接操作s，来操作未进行后移的指针p或q
 
    
    //借助第一个链表的头结点构造一个新的空表，该空表用来存储新合并的有序链表
    C = Ll1;    
    C->next = NULL;
    
    //指针r，始终指向空表C的尾节点。（初始指向空表C的头结点）
    r = C;
 
    //释放表二的头结点
    free(Ll2);  
    
    //当p和q都不为空的时候执行循环，当其中有一个为空时，只需将不为空所在的表剩余的节点全部插入到表C尾部即可
    while (p && q)  
    {   
        //整个if语句是用来找到，表一和表二中将要比较数据域的两个节点中较小的节点，并将指向该节点的指针用s临时保存
        //如果表一的数据域小于表二的数据域
        if (p->data < q->data)
        {
            //先将指针p保存到指针s, 因为后续p要后移，以保证可以通过直接操作s，来操作未进行后移的指针p
            s = p;
 
            //p后移，以保证始终指向表一中将要判断指针域大小的节点
            p = p->next;  
        }
        //如果表二的数据域小于或等于表一的数据域
        else if(p->data < q->data)
        {   
            //先将指针q保存到指针s, 因为后续q要后移，以保证可以通过直接操作s，来操作未进行后移的指针q
            s = q;
 
            //q后移，以保证始终指向表二中将要判断指针域大小的节点
            q = q->next;
        }
        else //如果两个相等
        {
            //找出任意一个处理即可，但是两个始终指向链表中将要判断指针域大小的节点的指针p,q都要后移
            s = q;
            q = q->next;
            p = p->next;
        }
        
        
        //将找到的较小者，通过操作临时保存过指向该较小者的指针s，来插入表C的尾部
        s->next = r->next; //相当于将插入表C尾部的节点的指针域置空 
        r->next = s; //将表C的尾节点的指针域指向要插入的节点（执行插入操作）
        r = r->next; //r后移，以保证始终指向表C的尾节点
    } 
    
    //判断循环是因为p空而结束，还是因为q空而结束
    if (p)
        //如果是q空导致，则将表一剩余部分插入到C表的尾部  
        r->next = p;   
    else
        //如果p空导致，则将表二剩余部分插入到C表的尾部   
        r->next = q; 
 
    //结束函数
    return;
}

int main()
{
    linklist(la);
    init_linklist(la);
    linklist(lb);
    init_linklist(lb);
    linklist(lc);
    init_linklist(lc);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        head_insert(la,a);
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int a;
        cin>>a;
        head_insert(lb,a);
    }
    combine_linklist(la,lb);
    printlinklist(la);
    cout<<endl;
    printlinklist(lb);
    cout<<endl;
    printlinklist(lc);
    cout<<endl;
    union_linklist(la,lb,lc);
    printlinklist(lc);
}