#include <bits/stdc++.h>

using namespace std;

typedef struct TreeNode
{
    int data;
    TreeNode * left;
    TreeNode * right;
    TreeNode * parent;
}TreeNode;
 
void pre_order(TreeNode * Node)//ǰ������ݹ��㷨
{
    if(Node == NULL)
        return;
    printf("%d ", Node->data);//��ʾ�ڵ����ݣ����Ը���Ϊ������������ǰ��
    pre_order(Node->left);
    pre_order(Node->right);
}
void middle_order(TreeNode *Node)//��������ݹ��㷨
{
    if(Node == NULL)
        return;
    middle_order(Node->left);
    printf("%d ", Node->data);//���м�
    middle_order(Node->right);
}
void post_order(TreeNode *Node)//��������ݹ��㷨
{
    if(Node == NULL)
        return; 
    post_order(Node->left);
    post_order(Node->right);
    printf("%d ", Node->data);//�����
}
