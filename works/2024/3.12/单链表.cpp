#include<iostream>
#include<malloc.h>
#define null 0
using namespace std;
typedef int elemtype;
typedef struct linknode
{
    elemtype data;
    struct linknode *next;
    //next.data

}lnode,*linklist;


bool init_linklist(linklist &l)//����һ�����ṹ �������ʼ��---��ʼ��Ϊֻ��һ��ͷ���ĵ�����
{
    l=(lnode *)malloc(sizeof(lnode));
    if(l==NULL)//��һԪ�ص�ַΪ��
    {
        return false;
    }
    l->next=NULL;
    return true;
}


bool delete_linklist(linklist &l,lnode *p,elemtype e)
{

    lnode *q;//<=>linklist q;
    q=p->next;
    if(q==null)
    {
        return false;
    }
    p->next=q->next;
    e=q->data;
    free(q);
}



bool insert_linklist(linklist &l,lnode *p,elemtype e)//�ײ巨����
{
    lnode *s;//һ���µ�Ԫ��
    s=(lnode *)malloc(sizeof(lnode));
    if(s==NULL)
    {
        return false;
    }
    s->data=e;


    //�Ƚ�ԭ������һ��Ԫ�ص�λ�ø��¼ҵ�Ԫ�أ�
    s->next=p->next;


    //�ٽ��¼ҵ�Ԫ�ص�ַ����һ��Ԫ��
    p->next=s;


    return true;
}
bool create_linklist_tail(linklist &l)//β�巨
{
    lnode *p;
    p=l;
    while(p->next!=null)
    {

    }
    int n;
    bool flag;
    cin>>n;
    elemtype e;
    for(int i=0;i<n;i++)
    {
        cin>>e;
        flag=insert_linklist(l,l,e);
    }
}
bool getelem(linklist l,int i,elemtype &e)
{
    int j=0;
    lnode *p;
    p=l;
    while(j<i)
    {
        j++;
        if(p==null)
        {
            return false;
        }
        p=p->next;
    }
    e=p->data;
}
bool create_linklist_head(linklist &l)//�ײ巨
{
    int n;
    bool flag;
    cin>>n;
    elemtype e;
    for(int i=0;i<n;i++)
    {
        cin>>e;
        flag=insert_linklist(l,l,e);
        if(flag==false)
        {
            return false;
        }
    }
    return true;
}
void traverse(linklist l)//���
{
    lnode *p;
    p=l->next;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char z;
        cin>>z;
        if(z=='H')
        {
            
        }
    }
    return 0;
}