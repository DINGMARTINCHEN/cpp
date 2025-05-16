#include<bits/stdc++.h>
using namespace std;

typedef char ElemType;

typedef struct Node/*整棵树和结点名称*/
{
    ElemType data;                    /*数据域*/
    struct Node *lchild, *rchild; /*左子树和右子树*/
} * BiTree, BiNode;


void CreateBiTree(BiTree &T)/*先需创建二叉树*/
{
    char ch;
    cin >> ch;
    if (ch == '#')
        T = NULL;
    else
    {
        T = new BiNode; /*创建一个新节点*/
        T->data = ch;
        CreateBiTree(T->lchild);
        CreateBiTree(T->rchild);
    }
    /*递归创建*/
}

void InOrderTraverse(BiTree T) /*中序遍历  递归*/
{
    if (T)
    {
        InOrderTraverse(T->lchild);
        cout << T->data;
        InOrderTraverse(T->rchild);
    }
}

// void Preorder_non(BiTree t)/*中序遍历  非递归*/
// {
//   struct BiTNode* St[Depth(t)], *p;
//   int top = 0; 			//置空栈
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

void PreOrderTraverse(BiTree T)/*先序遍历*/
{
    if (T)
    {
        cout << T->data;
        PreOrderTraverse(T->lchild);
        PreOrderTraverse(T->rchild);
    }
}

void PostOrderTraverse(BiTree T)/*后序遍历*/
{
    if (T)
    {
        PostOrderTraverse(T->lchild);
        PostOrderTraverse(T->rchild);
        cout << T->data;
    }
}

int NodeCount(BiTree T)/*统计二叉树中结点的个数*/
{
    if (T == NULL)
        return 0;
    else
        return NodeCount(T->lchild) + NodeCount(T->rchild) + 1;
}

int Depth(BiTree T)/*求树的深度*/
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

void Copy(BiTree T, BiTree &NewT)/*复制二叉树*/
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

int LeafCount(BiTree T)/*统计二叉树中叶子结点的个数*/
{
    if (!T)
        return 0;
    if (!T->lchild && !T->rchild)
        return 1;
    /*如果二叉树左子树和右子树皆为空，说明该二叉树根节点为叶子结点，结果为1*/
    else
        return LeafCount(T->lchild) + LeafCount(T->rchild);
}

void PrintAllPath(BiTree T, char path[], int pathlen)/*二叉树中从每个叶子结点到跟结点的路径*/
{
    int i;
    if (T != NULL)
    {
        path[pathlen] = T->data; /*将当前结点放入路径中*/
        if (T->lchild == NULL && T->rchild == NULL)
        {
            /*若这个节点是叶子结点*/
            for (i = pathlen; i >= 0; i--)
                cout << path[i] << "　";
            cout << "\n";
        }
        else
        {
            PrintAllPath(T->lchild, path, pathlen + 1);
            PrintAllPath(T->rchild, path, pathlen + 1);
        }
    }
}

int BiTree_empty(BiTree T)/*判断二叉树是否为空*/
{
    if (T)
        return 1;
    else
        return 0;
}

int main()
{
    BiTree T;
    //测试数据AB#CD##E##F#GH###
    CreateBiTree(T);
    cout << endl;
    InOrderTraverse(T);/*中序遍历  非递归*/
    cout << endl;
    InOrderTraverse(T);/*中序遍历  递归*/
    cout << endl;
    PreOrderTraverse(T);/*先序遍历*/
    cout << endl;
    PostOrderTraverse(T);/*后序遍历*/
    return 0;
}
