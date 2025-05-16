#include<bits/stdc++.h>
using namespace std;

typedef struct btreenode
{
    char data;
    int ltag;
    int rtag;
    struct btreenode *lchild,*rchild;
}btnode,*btree;

typedef struct        //±£´æµØÖ·
{
    btree *elems;
    btree *top;
    int stacksize;
}Stack;

void initi_stack(Stack &s)
{
    s.elems=(btree *)malloc(100*sizeof(btree));
    s.top=s.elems;
    s.stacksize=100;
}

void push(Stack &s,btree p)
{
    *(s.top)=p;
    s.top++;
}

void pop(Stack &s,btree &p)
{
    s.top--;
    p=*(s.top);

}

void create_btree(btree &bt)
{
    char ch;
    cin>>ch;
    if(ch=='#') 1`
    {
        bt=NULL;
    }
    else
    {
        bt=(btnode *)malloc(sizeof(btnode));
        bt->data=ch;
        
        create_btree(bt->lchild);
        create_btree(bt->rchild);
    }
}

void preorder(btree bt)
{
    if(bt!=NULL)
    {
        cout<<bt->data<<" ";
        preorder(bt->lchild);
        preorder(bt->rchild);
    }
}

void preorder_non(btree bt)
{
    Stack s;
    initi_stack(s);
    // while(bt!=NULL)
    // {
    //     cout<<bt->data;
    //     push(s,bt->rchild);
    //     bt=bt->lchild;
    // }
    // if(s.elems!=s.top)
    // {
    //     pop(s,bt);
    //     goto 
    // }
    while(bt!=NULL||(s.elems!=s.top))
    {
        if(bt!=NULL)
        {
            cout<<bt->data;
            push(s,bt->rchild);

        }
    }
}

int main()
{
    btree bt;
    create_btree(bt);
    preorder(bt);
}