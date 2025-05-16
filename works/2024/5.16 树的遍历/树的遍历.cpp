#include<bits/stdc++.h>

using namespace std;
 
typedef struct BitNode//����洢�ṹ
{
    char data;
    struct BitNode *lchild,*rchild;
}BitNode,*BitTree;
 
void CreateBitTree(BitTree &T)//�㷨5.3 ������˳������������
{
    char ch;//�������洢������
    cin>>ch;
    if(ch=='#') T=NULL;//������Ϊ�ַ�Ϊ#���ݹ��������������
    else
     {
        T=new BitNode;//����ռ䣬�������
        T->data=ch;//�洢���ݣ����ɸ��ڵ�
        CreateBitTree(T->lchild);//�������������ݹ飩
        CreateBitTree(T->rchild);//�������������ݹ飩
     };
     //һ��ע��ݹ���õĺ�����Ҫд���ˣ�
}
//��������1��ABDH#K###E##CFI###G#J##
//��������2��12#46###3#5##

void Visit(BitTree T){
    cout<<T->data;
}
 
void PreOrderTraverse(BitTree T)//�������������
{
    if(T) 
    {
        Visit(T);//���ʸ��ڵ�
        PreOrderTraverse(T->lchild);
        PreOrderTraverse(T->rchild);
    }
}
 

void InOrderTraverse(BitTree T)
{//�������������
    if(T==0) return;
    InOrderTraverse(T->lchild);
    Visit(T);//���ʸ��ڵ�
    InOrderTraverse(T->rchild);
}
 

void PostOrderTraverse(BitTree T)//�������������
{
    if(T==0) return;
    PostOrderTraverse(T->lchild);
    PostOrderTraverse(T->rchild);
    Visit(T);//���ʸ��ڵ�
}
 
 

int main()
{
    BitTree T;//TΪָ��ǰ���ڵ��ָ��
    cout<<"�����빹�������ֵ"<<endl;
    CreateBitTree(T);
    cout<<"���ѹ������"<<endl;
 
    cout<<"ǰ��������:"<<endl;
    PreOrderTraverse(T);
 
    cout<<endl<<"����������:"<<endl;
    InOrderTraverse(T);
 
    cout<<endl<<"����������:"<<endl;
    PostOrderTraverse(T);
}
 
//�ܽ᣺
//1���������������򡢺�����ʹ�õݹ��˼�룻
//2���ݹ���õ����Լ��ĺ������Լ��ĺ�����������Լ���д����ʱע��ͬ���޸ģ�