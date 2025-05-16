#include<bits/stdc++.h>
using namespace std;

struct linkList
{
    int num;
    linkList *next;
}*linklist;

bool initi(linklist &l)
{
    linklist *p;
    p=(linklist *)malloc(sizeof(linklist));
    p->next=NULL;
}

bool insert_data(linklist &ll,linklist *p,int n)
{
    linklist *s;
    s=(linklist *)malloc(sizeof(linklist));
    s->num=n;
    s->next=p->next;
    p->next=s;
}

bool insert_k(linklist &l,int k,int n)
{
    linklist *p;
    p=l.next;
    while(k)
    {
        p->next=p->next->next;
        k--;
    }
    insert_data(l,p,n);
}

bool delete_linklist_elem(linklist &l,int n)
{
    linklist *p;
    p=l.next;
    while(n)
    {
        p->next=p->next->next;
    }
    free(p);
}

int main()
{
    int n;
    cin>>n;
     linklist ll;
    initi ll;
    for(int i=0;i<n;i++)
    {
        char z;
        int a,k;
        cin>>z;
        
        if(z=='H')
        {
            cin>>a;
            insert_data(ll,*ll,a);
        }
        if(z=='I')
        {
            cin>>k>>a;
            insert_k(ll,k,a);
        }
        if(z=='D')
        {
            cin>>k>>a;
            delete_linklist_elem(ll,k);
        }
    }
}