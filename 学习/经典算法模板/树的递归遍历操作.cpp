#include <bits/stdc++.h>

using namespace std;

typedef struct TreeNode
{
    int data;
    TreeNode * left;
    TreeNode * right;
    TreeNode * parent;
}TreeNode;
 
void pre_order(TreeNode * Node)//前序遍历递归算法
{
    if(Node == NULL)
        return;
    printf("%d ", Node->data);//显示节点数据，可以更改为其他操作。在前面
    pre_order(Node->left);
    pre_order(Node->right);
}
void middle_order(TreeNode *Node)//中序遍历递归算法
{
    if(Node == NULL)
        return;
    middle_order(Node->left);
    printf("%d ", Node->data);//在中间
    middle_order(Node->right);
}
void post_order(TreeNode *Node)//后序遍历递归算法
{
    if(Node == NULL)
        return; 
    post_order(Node->left);
    post_order(Node->right);
    printf("%d ", Node->data);//在最后
}
