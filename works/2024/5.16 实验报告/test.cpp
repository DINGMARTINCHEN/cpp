#include<bits/stdc++.h>
using  namespace std;
struct huff
{
    int num;
    string character;
};
bool compare(huff a,huff b)
{
    if(a.num<a.num)
    {
        return true;
    }
    else if(a.num==b.num&&a.character<b.character)
    {
        return true;
    }
    else
    {
        return false;
    }
}

typedef struct BitNode//定义存储结构
{
    char data;
    struct BitNode *lchild,*rchild;
}BitNode,*BitTree;

int main()
{
    int n;
    cin>>n;
    huff a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].character;
        a[i].num=i;
    }
    sort(a,a+n,compare);
}