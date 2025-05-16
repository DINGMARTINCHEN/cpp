#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
struct trees
{
    int father=0;
    int sons=0;
};
int main()
{
    int n,m;
    cin>>n>>m;
    trees tree[N];
    for(int i=0;i<m;i++)
    {
        int fa,self;
        cin>>fa>>self;
        tree[self].father=fa;
        tree[fa].sons++;
    }
    for(int i=1;i<=n;i++)
    {
        if(tree[i].father==0)
        {
            cout<<i<<endl;
            break;
        }
    }
    int maxn=0,flag;
    for(int i=1;i<=n;i++)
    {
        // cout<<tree[i].sons<<" ";
        if(tree[i].sons>maxn)
        {
            maxn=tree[i].sons;
            flag=i;
        }
    }
    cout<<flag<<endl;
    for(int i=1;i<=n;i++)
    {
        if(tree[i].father==flag)
        {
            cout<<i<<" ";
        }
    }
}