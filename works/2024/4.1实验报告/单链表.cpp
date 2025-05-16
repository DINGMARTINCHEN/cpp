#include<bits/stdc++.h>

using namespace std;

typedef int elemtype;

typedef struct LNode
{
    elemtype data;
    struct LNode *next;
}LNode,*linklist;

bool initi_linklist(linklist &l)//初始化头节点
{
    
    l=(LNode *)malloc(sizeof(linklist));//为头节点申请空间

    l->next=NULL;//头节点指针指向空
}

int main()
{

}