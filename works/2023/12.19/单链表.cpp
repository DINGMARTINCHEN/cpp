#include<bits/stdc++.h>
using namespace std;
typedef struct linknode
{
    int data;
    struct linknode *next;

}lnode,*linklist;
//ѭ��������
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
1.����ʵ���������(�����κ�Ԫ�ص�ʱ������ͬ��)
2.˳�����
3.ѭ���������ص㣺���κ�һ���ڵ���������ܰ����еĽڵ���ʵ�
4.������--�ṹ--Ŀ¼
5.��ϣ��
*/