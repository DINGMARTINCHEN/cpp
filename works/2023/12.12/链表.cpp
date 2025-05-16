#include<iostream>
#include<malloc.h>
using namespace std;
typedef int elemtype;//����Ԫ������
typedef struct linknode
{
    elemtype data;
    struct linknode *next;
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
bool insert_linklist(linklist &l,lnode *p,elemtype e)//����Ԫ��
{
    lnode *s;//һ���µ�Ԫ��
    s=(lnode *)malloc(sizeof(lnode));
    if(s==NULL)
    {
        return false;
    }
    s->data=e;


    //�Ƚ�ԭ������һ��Ԫ�ص�λ�ø��¼ӵ�Ԫ�أ�
    s->next=p->next;


    //�ٽ��¼ҵ�Ԫ�ص�ַ����һ��Ԫ��
    p->next=s;


    return true;
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
bool create_linklist_tail(linklist &l)//β�巨
{
    int n;
    lnode *tail;
    tail=l;
    elemtype e;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        bool flag;
        cin>>e;
        flag=insert_linklist(l,tail,e);
        if(flag==false)
        {
            return false;
        }
        tail=tail->next;
    }
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
void locate(linklist l,elemtype e,linklist &p)
{
    lnode *s,*q;//��Զ��һ��ָ������һ��֮ǰ����ʹ�ҹ�����һ������
    s=l->next;
    q=l;
    while(s!=NULL&&s->data<e)
    {
        q=s;
        s=s->next;//q��Զ��s֮ǰ

    }
    p=q;
}
void create_linklist_ordered(linklist l)
{
    int n;
    elemtype e;
    lnode *p;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        bool flag;
        //flag=///
        cin>>e;
        locate(l,e,p);

    }
}
void delete_linklist(linklist l,lnode *p,elemtype e)
{
    lnode *p;
    p=l->next;
    while(p!=NULL)
    {
        cout<<p->next<<" ";
        p=p->next;
    }
}
int main()
{
    linklist ll;
    init_linklist(ll);
    create_linklist_ordered(ll);
    traverse(ll);
    return 0;
}