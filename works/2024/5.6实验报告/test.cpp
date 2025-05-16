#include<bits/stdc++.h>
using namespace std;

typedef int Type;
 
typedef struct BSTreeNode{
    Type   key;//¹Ø¼ü×Ö£¨¼üÖµ£©
    struct BSTreeNode *left;//×óº¢×Ó
    struct BSTreeNode *right;//ÓÒº¢×Ó
    struct BSTreeNode *parent;//¸¸½Úµã
}Node ,*BSTree;

struct Node* create_bstree_node(Type key,Node *parent,Node *left, Node* right)
{
    Node* p;
    if ((p = (Node *)malloc(sizeof(Node))) == NULL)
        return NULL;
    p->key = key;
    p->left = left;
    p->right = right;
    p->parent = parent;
    return p;
}