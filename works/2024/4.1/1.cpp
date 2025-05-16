#include<bits/stdc++.h>
using namespace std;

typedef int elemtype;

typedef struct 
{
    elemtype *elems;
    int length;
    int listsize;
}sqlist;

bool initi_sqlist(sqlist &l)
{
    l.elems=(elemtype *)malloc(sizeof(elemtype)*100);
    if(l.elems==NULL)
    {
        return false;
    }
    l.length=0;
    l.listsize=100;
    return true;
}

bool insert_sqlist(sqlist &l,int i,elemtype e)
{
    if(i>l.length+1||i<1)//if(i>l.length||i<0)
    {
        return false;
    }
    if(l.length>=l.listsize)
    {
        elemtype *newbase=(elemtype*)realloc(l.elems,(l.listsize+10)*sizeof(elemtype));
        if(newbase==NULL)
        {
            return false;
        }
        l.elems=newbase;
        l.listsize+=10;
    }
    for(int j=i;j<l.length;j++)
    {
        l.elems[j+1]=l.elems[j];
    }
    l.elems[i]=e;
    l.length++;
}

void traverse(sqlist l)
{
    for(int i=1;i<=l.length;i++)
    {
        cout<<l.elems[i]<<" ";
    }
}

bool head_insert_sqlist(sqlist &l,elemtype e)
{
    elemtype *newbase=(elemtype*)realloc(l.elems,(l.listsize+10)*sizeof(elemtype));
    if(newbase==NULL)
    {
        return false;
    }
    l.elems=newbase;
    l.listsize+=10;
    l.length++;
    for(int j=l.length;j>1;j--)
    {
        l.elems[j]=l.elems[j-1];
    }
    l.elems[1]=e;
}

int main()
{
    sqlist(ll);
    initi_sqlist(ll);
    for(int i=1;i<=5;i++)
    {
        head_insert_sqlist(ll,i);
        traverse(ll);
        cout<<'\n';
    }
}