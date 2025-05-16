#include<iostream>
#include<malloc.h>
using namespace std;
typedef int elemtype;//定义元素类型
typedef struct linknode
{
    elemtype data;
    struct linknode *next;
}lnode,*linklist;
bool init_linklist(linklist &l)//定义一个结点结构 单链表初始化---初始化为只有一个头结点的单链表
{
    l=(lnode *)malloc(sizeof(lnode));
    if(l==NULL)//下一元素地址为空
    {
        return false;
    }
    l->next=NULL;
    return true;
}
bool insert_linklist(linklist &l,lnode *p,elemtype e)//插入元素
{
    lnode *s;//一个新的元素
    s=(lnode *)malloc(sizeof(lnode));
    if(s==NULL)
    {
        return false;
    }
    s->data=e;


    //先将原链表下一个元素的位置给新加的元素；
    s->next=p->next;


    //再将新家的元素地址给上一个元素
    p->next=s;


    return true;
}
bool create_linklist_head(linklist &l)//首插法
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
bool create_linklist_tail(linklist &l)//尾插法
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
void traverse(linklist l)//输出
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
    lnode *s,*q;//永远让一个指针在另一个之前，即使找过还有一个正好
    s=l->next;
    q=l;
    while(s!=NULL&&s->data<e)
    {
        q=s;
        s=s->next;//q永远在s之前

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