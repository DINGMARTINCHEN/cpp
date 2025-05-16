#include<bits/stdc++.h>
using namespace std;

typedef int ElemType;

typedef struct BiNode{
    ElemType data;
    struct BiNode *lchild, *rchild;
}BiNode, *BiTree;


//��������������㷨 - �� �� ��
int PreOrderTraverse(BiTree T){
    if( T ==   NULL)//���ǿն���������ֱ�ӷ���0
    {       
        return 1;
    }
    else
    {
        visit(T);       //���ʸ��ڵ㣨�Զ���visit()�����������ȡ�ýڵ��������
        PreOrderTraverse(T->lchild);        //�����ݹ�������
        PreOrderTraverse(T->rchild);        //�����ݹ�������
    }
}
 
 
 
 
 
//��������������㷨 - �� �� �� 
int InOrderTraverse(BiTree T){
    if( T == NULL )//���ǿն���������ֱ�ӷ���
    {        
        return 1;
    }
    else
    {
        InOrderTraverse(T->lchild);     //�����ݹ�������
        visit(T);       //���ʸ��ڵ�
        InOrderTraverse(T->rchild);     //�����ݹ�������
    }
}
 
 
 
 
 
//��������������㷨 - �� �� ��
int PostOrderTraverse(BiTree T){
    if( T == NULL )
    {
        return 1;
    }
    else
    {
        PostOrderTraverse(T->lchild);       //�����ݹ�������
        PostOrderTraverse(T->rchild);       //�����ݹ�������
        visit(T);       //���ʸ��ڵ�
    }
}