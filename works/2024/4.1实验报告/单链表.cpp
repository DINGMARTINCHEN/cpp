#include<bits/stdc++.h>

using namespace std;

typedef int elemtype;

typedef struct LNode
{
    elemtype data;
    struct LNode *next;
}LNode,*linklist;

bool initi_linklist(linklist &l)//��ʼ��ͷ�ڵ�
{
    
    l=(LNode *)malloc(sizeof(linklist));//Ϊͷ�ڵ�����ռ�

    l->next=NULL;//ͷ�ڵ�ָ��ָ���
}

int main()
{

}