#include<bits/stdc++.h>
using namespace std;
typedef struct linknode
{
    int data;
    struct linknode *next;

}lnode,*linklist;
//循环单链表
bool initlinklist(linklist &l)
{
    l=(lnode)malloc(sizeof(lnode));
    if(l==NULL)
    {
        return false;
    }
    l->next=l;
}
bool getelem(linklist l,int i,int*e)
{
    int k=0;
    lnode *p;
    p=l->next;
    while(p->next!=NULL&&k<i)
    {
        p=p->next;
        k++;
    }
    if(k<i)
    {
        return false;
    }
    else
    {
        e=p->data;
        return true;
    }
    
}
bool getelem(sqlist sq,int i,int &e)
{
    if(i>0&&i<=sq.length)
    {
        e=sq.elem
    }
}
int main()
{

}
/*
1.不能实现随机访问(访问任何元素的时间是相同的)
2.顺序访问
3.循环单链表特点：从任何一个节点出发，都能把所有的节点访问到
4.索引表--结构--目录
5.哈希表
*/