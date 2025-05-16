// #include<bits/stdc++.h>
// using namespace std;
 
// typedef int elemtype; 

// typedef struct Lnode
// {
//     elemtype data;
//     int power;
//     struct Lnode *next; 
// }Lnode,*linklist;

// void init_linklist(linklist &l)//初始化链表
// {
//     l=(Lnode *)malloc(sizeof(linklist));
//     l->next=NULL;
// }

// Lnode *getelem_locate(linklist l,int i)//按位查找
// {
//     int j=1;
//     Lnode *p=l->next;
//     if(i==0)
//     {
//         return l;
//     }
//     while(p!=NULL&&j<i)
//     {
//         p=p->next;
//         j++;
//     }
//     return p;
// }

// void insert_linklist(linklist &l,int k,elemtype a)//在第k个后面插入元素
// {
//     Lnode *p=getelem_locate(l,k);
//     Lnode *s=(Lnode *)malloc(sizeof(Lnode));
//     s->data=a;
//     s->next=p->next;
//     p->next=s;
// }

// int Length(linklist L){
//     Lnode *p = L->next;
//     int len = 0;
//     while(p){
//         len++;
//         p = p->next;
//     }
//     return len;
// }

// void printlinklist(linklist l)//链表元素挨个输出
// {
//     Lnode *p=l;
//     while(p->next!=NULL)
//     {
//         p=p->next;
//         if(p->data!=-111)
//         cout<<p->data<<" ";
//     }
// }

// void head_insert(linklist &l,elemtype n)//首插法
// {
//     Lnode *s=(Lnode *)malloc(sizeof(Lnode));
//     s->data=n;
//     s->next=l->next;
//     l->next=s;
// }

// void delete_locate_lnode(linklist &l,int k)//按位删除元素
// {
//     Lnode *p=getelem_locate(l,k-1);
//     p->next=p->next->next;
// }

// Lnode *change_locate(linklist &l,int i)//按位查找
// {
//     int j=1;
//     Lnode *p=l->next;
//     if(i==0)
//     {
//         return l;
//     }
//     while(p!=NULL&&j<i)
//     {
//         p=p->next;
//         j++;
//     }
//     p->data=-111;
// };

// int main()
// {
//     linklist ll;
//     init_linklist(ll);
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         char z;
//         cin>>z;
//         if(z=='H')
//         {
//             int a;
//             cin>>a;
//             head_insert(ll,a);
//         }
//         else if(z=='I')
//         {
//             int a,b;
//             cin>>a>>b;
//             insert_linklist(ll,a,b);
//         }
//         else
//         {
//             int a;
//             cin>>a;
//             // if(a==0)
//             // {
//             //     change_locate(ll,a);
//             // }
//             // else
//             // {
//                 delete_locate_lnode(ll,a);
//             // }
//         }
//         // cout<<"gaibianh  ";
//         // printlinklist(ll);
//         // cout<<endl<<endl<<endl<<endl;
//     }
//     printlinklist(ll);
// }
#include <bits/stdc++.h>
using namespace std;
const int N=100010;
int head,e[N],ne[N],idx;
void init()
{
    head=-1;
    idx=0;
}
void add_to_head(int x)
{
    e[idx]=x;
    ne[idx]=head;
    head=idx;
    idx++;
}
void add(int k,int x)
{
    e[idx]=x;
    ne[idx]=ne[k];
    ne[k]=idx;
    idx++;
}
void del(int k)
{
    ne[k]=ne[ne[k]];
}
int main()
{
    int  m;
    cin>>m;
    init();
    while(m--)
    {
        char op;
        int k,x;
        cin>>op;
        if(op=='H')
        {
            cin>>x;
            add_to_head(x);
        }
        else if(op=='D')
        {
            cin>>k;
            if(!k)    head=ne[head];
            del(k-1);
         } 
        else
        {
            cin>>k>>x;
            add(k-1,x);
        }
    }
    for(int i=head;i!=-1;i=ne[i])
        cout<<e[i]<<" ";
    cout<<"\n";
    return 0;
}