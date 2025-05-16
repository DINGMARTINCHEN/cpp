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

void init_linklist(linklist &l)//��ʼ������
{
    l=(Lnode *)malloc(sizeof(linklist));
    l->next=NULL;
}

Lnode *getelem_locate(linklist l,int i)//��λ����
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

void insert_linklist(linklist &l,int k,elemtype a)//�ڵ�k���������Ԫ��
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

void printlinklist(linklist l)//����Ԫ�ذ������
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

void head_insert(linklist &l,elemtype n)//�ײ巨
{
    Lnode *s=(Lnode *)malloc(sizeof(Lnode));
    s->data=n;
    s->next=l->next;
    l->next=s;
}

Lnode *getelem_data(linklist l,elemtype n)//��ֵ����
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

void tail_insert(linklist &l,elemtype a)//Ϊ��β�巨
{
    insert_linklist(l,Length(l),a);
}

void delete_locate_lnode(linklist &l,int k)//��λɾ��Ԫ��
{
    Lnode *p=getelem_locate(l,k-1);
    p->next=p->next->next;
}

void delete_data_lnode(linklist &l,elemtype n)//������ɾ��Ԫ��
{
    Lnode *p=getelem_data(l,n);
    p->next=p->next->next;
}

void swap_linklist(linklist &l,int k,int i)//��k�͵�i��Ԫ�ؽ�����ֵ
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

void merge(linklist la,linklist lb,linklist &lc)//��������ȡ����
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

void union_linklist(linklist la,linklist lb,linklist &lc)//��������ȡ����
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

void traverse(linklist LC) //����
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

bool Create_List_Tail(linklist &L,int n) //β�巨����Ԫ�� 
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

void combine_linklist(linklist Ll1, linklist Ll2)///���������ϲ�
{   
    linklist C; //ָ��ձ�C��ͷ����ָ�루����������±�
    linklist p = Ll1->next; //ָ��pʼ��ָ���һ�н�Ҫ�ж�ָ�����С�Ľڵ㣬��ʼָ���һͷ���ĺ����ڵ�
    linklist q = Ll2->next; //ָ��qʼ��ָ�����н�Ҫ�ж�ָ�����С�Ľڵ㣬��ʼָ����ͷ���ĺ����ڵ�
    linklist r; //ָ��rʼ��ָ��ձ�C��β�ڵ㣬��ʼָ��ձ�C��ͷ���
    linklist s; //��ʱ����ָ��p��q������ͨ��ֱ�Ӳ���s��������δ���к��Ƶ�ָ��p��q
 
    
    //������һ�������ͷ��㹹��һ���µĿձ��ÿձ������洢�ºϲ�����������
    C = Ll1;    
    C->next = NULL;
    
    //ָ��r��ʼ��ָ��ձ�C��β�ڵ㡣����ʼָ��ձ�C��ͷ��㣩
    r = C;
 
    //�ͷű����ͷ���
    free(Ll2);  
    
    //��p��q����Ϊ�յ�ʱ��ִ��ѭ������������һ��Ϊ��ʱ��ֻ�轫��Ϊ�����ڵı�ʣ��Ľڵ�ȫ�����뵽��Cβ������
    while (p && q)  
    {   
        //����if����������ҵ�����һ�ͱ���н�Ҫ�Ƚ�������������ڵ��н�С�Ľڵ㣬����ָ��ýڵ��ָ����s��ʱ����
        //�����һ��������С�ڱ����������
        if (p->data < q->data)
        {
            //�Ƚ�ָ��p���浽ָ��s, ��Ϊ����pҪ���ƣ��Ա�֤����ͨ��ֱ�Ӳ���s��������δ���к��Ƶ�ָ��p
            s = p;
 
            //p���ƣ��Ա�֤ʼ��ָ���һ�н�Ҫ�ж�ָ�����С�Ľڵ�
            p = p->next;  
        }
        //��������������С�ڻ���ڱ�һ��������
        else if(p->data < q->data)
        {   
            //�Ƚ�ָ��q���浽ָ��s, ��Ϊ����qҪ���ƣ��Ա�֤����ͨ��ֱ�Ӳ���s��������δ���к��Ƶ�ָ��q
            s = q;
 
            //q���ƣ��Ա�֤ʼ��ָ�����н�Ҫ�ж�ָ�����С�Ľڵ�
            q = q->next;
        }
        else //����������
        {
            //�ҳ�����һ�������ɣ���������ʼ��ָ�������н�Ҫ�ж�ָ�����С�Ľڵ��ָ��p,q��Ҫ����
            s = q;
            q = q->next;
            p = p->next;
        }
        
        
        //���ҵ��Ľ�С�ߣ�ͨ��������ʱ�����ָ��ý�С�ߵ�ָ��s���������C��β��
        s->next = r->next; //�൱�ڽ������Cβ���Ľڵ��ָ�����ÿ� 
        r->next = s; //����C��β�ڵ��ָ����ָ��Ҫ����Ľڵ㣨ִ�в��������
        r = r->next; //r���ƣ��Ա�֤ʼ��ָ���C��β�ڵ�
    } 
    
    //�ж�ѭ������Ϊp�ն�������������Ϊq�ն�����
    if (p)
        //�����q�յ��£��򽫱�һʣ�ಿ�ֲ��뵽C���β��  
        r->next = p;   
    else
        //���p�յ��£��򽫱��ʣ�ಿ�ֲ��뵽C���β��   
        r->next = q; 
 
    //��������
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