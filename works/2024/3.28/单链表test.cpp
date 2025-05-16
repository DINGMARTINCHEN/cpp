#include<bits/stdc++.h>
using namespace std;

typedef int elementytpe;

typedef struct linklist
{
    elementytpe data;
    struct linklist* next;
};

bool initi_linklist(linklist *l)
{
    l=(linklist*)malloc(sizeof(linklist));
    l->next=NULL;
}

bool print_linklist(linklist *l)
{
    linklist *p=l;
    while (p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
void traverse(linklist *l)//Êä³ö
{
    linklist *p;
    p=l->next;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

// linklist *getelem(linklist *l,int k)
// {
//     linklist *p=l->next;

//     while(k)
//     {
//         p=p->next;
//         k--;
//     }
//     return p;
// }

bool insert_linklist(linklist* l,int k,elementytpe n)
{
    linklist *p=l->next;
    while(k)
    {
        p=p->next;
        k--;
    }
    linklist *s=(linklist *)malloc(sizeof(linklist));
    s->data=n;
    s->next=p->next;
    p->next=s;
}

bool head_insert_linlist(linklist *l,elementytpe n)
{
    linklist *s=(linklist *)malloc(sizeof(linklist));
    s->next=l->next;
    s->data=n;
    l->next=s;
}



int main()
{
    linklist *l;
    elementytpe a;
    initi_linklist(l);
    // cin>>a;
    head_insert_linlist(l,4);
    print_linklist(l);
    traverse(l);
}