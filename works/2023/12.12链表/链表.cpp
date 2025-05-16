#include<iostream>
#include<malloc.h>
using namespace std;
typedef int elemtype;
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
bool insert_linklist(linklist &l,lnode *p,elemtype e)//首插法调用
{
    lnode *s;//一个新的元素
    s=(lnode *)malloc(sizeof(lnode));
    if(s==NULL)
    {
        return false;
    }
    s->data=e;


    //先将原链表下一个元素的位置给新家的元素；
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
int main()
{
    linklist ll;
    init_linklist(ll);
    create_linklist_head(ll);
    traverse(ll);
    return 0;
}