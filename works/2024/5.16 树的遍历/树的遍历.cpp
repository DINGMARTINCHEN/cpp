#include<bits/stdc++.h>

using namespace std;
 
typedef struct BitNode//定义存储结构
{
    char data;
    struct BitNode *lchild,*rchild;
}BitNode,*BitTree;
 
void CreateBitTree(BitTree &T)//算法5.3 先序遍的顺序建立二叉链表
{
    char ch;//接收树存储的数据
    cin>>ch;
    if(ch=='#') T=NULL;//若输入为字符为#，递归结束，建立空树
    else
     {
        T=new BitNode;//申请空间，创建结点
        T->data=ch;//存储数据，生成根节点
        CreateBitTree(T->lchild);//创建左子树（递归）
        CreateBitTree(T->rchild);//创建右子树（递归）
     };
     //一定注意递归调用的函数不要写错了！
}
//测试用例1：ABDH#K###E##CFI###G#J##
//测试用例2：12#46###3#5##

void Visit(BitTree T){
    cout<<T->data;
}
 
void PreOrderTraverse(BitTree T)//先序遍历输出结点
{
    if(T) 
    {
        Visit(T);//访问根节点
        PreOrderTraverse(T->lchild);
        PreOrderTraverse(T->rchild);
    }
}
 

void InOrderTraverse(BitTree T)
{//中序遍历输出结点
    if(T==0) return;
    InOrderTraverse(T->lchild);
    Visit(T);//访问根节点
    InOrderTraverse(T->rchild);
}
 

void PostOrderTraverse(BitTree T)//后序遍历输出结点
{
    if(T==0) return;
    PostOrderTraverse(T->lchild);
    PostOrderTraverse(T->rchild);
    Visit(T);//访问根节点
}
 
 

int main()
{
    BitTree T;//T为指向当前根节点的指针
    cout<<"请输入构造结点的数值"<<endl;
    CreateBitTree(T);
    cout<<"树已构造完毕"<<endl;
 
    cout<<"前序遍历结果:"<<endl;
    PreOrderTraverse(T);
 
    cout<<endl<<"中序遍历结果:"<<endl;
    InOrderTraverse(T);
 
    cout<<endl<<"后序遍历结果:"<<endl;
    PostOrderTraverse(T);
}
 
//总结：
//1、创建、先序、中序、后序都是使用递归的思想；
//2、递归调用的是自己的函数，自己的函数里面调用自己，写代码时注意同步修改！