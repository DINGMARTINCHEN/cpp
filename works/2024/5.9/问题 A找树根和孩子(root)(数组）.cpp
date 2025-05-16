#include<bits/stdc++.h>
using namespace std;
const int N=1e3+110;
int main()
{
    int n,m;
    cin>>n>>m;
    int fa[N]={0},child[N]={0};
    for(int i=0;i<m;i++)
    {
        int father,chi;
        cin>>father>>chi;
        fa[chi]=father;
        child[father]++;
    }
    int maxn=0;
    for(int i=1;i<=n;i++)
    {
        if(fa[i]==0)
        {
            cout<<"i"<<i<<endl;
        }
    }
    int flag=0;
    for(int i=1;i<=n;i++)
    {
        if(child[i]>maxn)
        {
            maxn=child[i];
            flag=i;
        }
    }
    cout<<flag<<endl;
    for(int i=1;i<=n;i++)
    {
        if(fa[i]==flag)
        {
            cout<<"child"<<i<<" ";
        }
    }
}