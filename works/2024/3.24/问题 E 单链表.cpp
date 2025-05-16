#include<bits/stdc++.h>
using namespace std;

typedef struct LNode{
    int data;
    struct LNode *next;
}LNode, *LinkList;

//��ʼ��
void InitList(LinkList &L){
    L = (LNode *)malloc(sizeof(LinkList));
    L->next = NULL;
}

//��������
void PrintList(LinkList L){
    LNode *p = L->next;
    while(p){
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}

//������ĳ���
int Length(LinkList L){
    LNode *p = L->next;
    int len = 0;
    while(p){
        len++;
        p = p->next;
    }
    return len;
}

//ͷ�巨����������
LinkList HeadInsert(LinkList &L){
    InitList(L); //��ʼ��
    int x;
    cin>>x;
    while(x!=9999){
        LNode *s = (LNode *)malloc(sizeof(LNode));
        s->data = x;
        s->next = L->next;
        L->next = s;
        cin>>x;
    }
    return L;
}

//β�巨����������
LinkList TailInsert(LinkList &L){
    InitList(L);
    LNode *s,*r=L;
    int x;
    cin>>x;
    while(x!=9999){
        s = (LNode *)malloc(sizeof(LNode));
        s->data = x;
        r->next = s;
        r = s;
        cin>>x;
    }
    r->next = NULL;
    return L;
}

//��ֵ���ң�����x��L�е�λ��
LNode *LocateElem(LinkList L, int x){
    LNode *p = L->next;
    while(p && p->data != x){
        p = p->next;
    }
    return p;
}

//��λ���ң������ڵ�����L�е�i��λ�õĽ��
LNode *GetElem(LinkList L, int i){
    int j=1;
    LNode *p = L->next;
    if(i==0)return L;
    if(i<1)return NULL;
    while(p && j<i){
        p = p->next;
        j++;
    }
    return p; //���i���ڱ���p=NULL,ֱ�ӷ���p����
}

//��x���뵽������L�ĵ�i��λ����
void Insert(LinkList &L, int i, int x){
    LNode *p = GetElem(L,i-1);
    LNode *s = (LNode *)malloc(sizeof(LNode));
    s->data = x;
    s->next = p->next;
    p->next = s;
}

//ɾ������:���������еĵ�i�����ɾ��
void Delete(LinkList &L, int i){
    if(i<1 || i>Length(L)){
        cout<<"delete failed: index is wrong."<<endl;
        return;
    }
    LNode *p = GetElem(L,i-1);
    LNode *q = p->next;
    p->next = q->next;
    free(q);
}
int main(){
    LinkList l;
    // InitList(l);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char z;
        cin>>z;
        if(z=='D')
        {
            int a;
            cin>>a;
            Delete(l,a);
        }
        if(z=='H')
        {
            HeadInsert(l);
        }
        if(z=='I')
        {
            int k,a;
            cin>>k;
            if(k==1)
            {
                HeadInsert(l);
            }
            else
            {       
                cin>>a;        
                Insert(l,k,a);
            }
        }
    }
    PrintList(l);
    return 0;
}

// int main(){
//     //��ʼ����β�巨����������
//     LinkList L = TailInsert(L);
//     //���룺�ڵڶ���λ�ò����㣬������Ϊ888��������������
//     Insert(L,2,888);
//     cout<<"�ڵڶ���λ�ò���888�� ";
//     PrintList(L);
//     //ɾ����ɾ�����ĸ����
//     Delete(L,4);
//     cout<<"ɾ�����ĸ�����";
//     PrintList(L);
//     //��λ���ң����ҵ�������㣬��������������ֵ
//     LNode *p = GetElem(L,3);
//     cout<<"����������ֵΪ��"<<p->data<<endl;
//     //��ֵ���ң�����������Ϊ2�Ľ���ָ��
//     LNode *q = LocateElem(L,2);
//     cout<<"����Ϊ2�Ľ�����һ������ֵΪ��"<<q->next->data<<endl;
//     //���������ĳ���
//     cout<<"������ĳ��ȣ�"<<Length(L)<<endl;
//     return 0;
// }
