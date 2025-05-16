#include<bits/stdc++.h>
using namespace std;

typedef char ElemType;

typedef struct Node/*�������ͽ������*/
{
    ElemType data;                    /*������*/
    struct Node *lchild, *rchild; /*��������������*/
} * BiTree, BiNode;


void CreateBiTree(BiTree &T)/*���贴��������*/
{
    char ch;
    cin >> ch;
    if (ch == '#')
        T = NULL;
    else
    {
        T = new BiNode; /*����һ���½ڵ�*/
        T->data = ch;
        CreateBiTree(T->lchild);
        CreateBiTree(T->rchild);
    }
    /*�ݹ鴴��*/
}

void InOrderTraverse(BiTree T) /*�������  �ݹ�*/
{
    if (T)
    {
        InOrderTraverse(T->lchild);
        cout << T->data;
        InOrderTraverse(T->rchild);
    }
}

// void Preorder_non(BiTree t)/*�������  �ǵݹ�*/
// {
//   struct BiTNode* St[Depth(t)], *p;
//   int top = 0; 			//�ÿ�ջ
//   if (t != NULL){
// 	  St[top++] = t;
//     while(top){
// 	   p = St[--top]; printf("%c ", p->data);
// 	   if(p->rchild != NULL)
// 	      St[top++] = p->rchild;
// 	   if(p->lchild != NULL)
// 	      St[top++] = p->lchild;
//     }
//     printf("\n");
//   }
// }

void PreOrderTraverse(BiTree T)/*�������*/
{
    if (T)
    {
        cout << T->data;
        PreOrderTraverse(T->lchild);
        PreOrderTraverse(T->rchild);
    }
}

void PostOrderTraverse(BiTree T)/*�������*/
{
    if (T)
    {
        PostOrderTraverse(T->lchild);
        PostOrderTraverse(T->rchild);
        cout << T->data;
    }
}

int NodeCount(BiTree T)/*ͳ�ƶ������н��ĸ���*/
{
    if (T == NULL)
        return 0;
    else
        return NodeCount(T->lchild) + NodeCount(T->rchild) + 1;
}

int Depth(BiTree T)/*���������*/
{
    if (T == NULL)
        return 0;
    else
    {
        int i = Depth(T->lchild);
        int j = Depth(T->rchild);
        return i > j ? i + 1 : j + 1;
    }
}

void Copy(BiTree T, BiTree &NewT)/*���ƶ�����*/
{
    if (T = NULL)
    {
        NewT = NULL;
        return;
    }
    else
    {
        NewT = new BiNode;
        NewT->data = T->data;
        Copy(T->lchild, NewT->lchild);
        Copy(T->rchild, NewT->rchild);
    }
}

int LeafCount(BiTree T)/*ͳ�ƶ�������Ҷ�ӽ��ĸ���*/
{
    if (!T)
        return 0;
    if (!T->lchild && !T->rchild)
        return 1;
    /*�������������������������Ϊ�գ�˵���ö��������ڵ�ΪҶ�ӽ�㣬���Ϊ1*/
    else
        return LeafCount(T->lchild) + LeafCount(T->rchild);
}

void PrintAllPath(BiTree T, char path[], int pathlen)/*�������д�ÿ��Ҷ�ӽ�㵽������·��*/
{
    int i;
    if (T != NULL)
    {
        path[pathlen] = T->data; /*����ǰ������·����*/
        if (T->lchild == NULL && T->rchild == NULL)
        {
            /*������ڵ���Ҷ�ӽ��*/
            for (i = pathlen; i >= 0; i--)
                cout << path[i] << "��";
            cout << "\n";
        }
        else
        {
            PrintAllPath(T->lchild, path, pathlen + 1);
            PrintAllPath(T->rchild, path, pathlen + 1);
        }
    }
}

int BiTree_empty(BiTree T)/*�ж϶������Ƿ�Ϊ��*/
{
    if (T)
        return 1;
    else
        return 0;
}

int main()
{
    BiTree T;
    //��������AB#CD##E##F#GH###
    CreateBiTree(T);
    cout << endl;
    InOrderTraverse(T);/*�������  �ǵݹ�*/
    cout << endl;
    InOrderTraverse(T);/*�������  �ݹ�*/
    cout << endl;
    PreOrderTraverse(T);/*�������*/
    cout << endl;
    PostOrderTraverse(T);/*�������*/
    return 0;
}
