#include<bits/stdc++.h>
using namespace std;
struct ss{
    int l,w;
}q[10001];
short judge[10001]={0};
int cmp(ss a,ss b)
{
    if(a.l==b.l) return a.w<b.w;
    return a.l<b.l;
}
int main() {
    int n;
    cin>>n;
    memset(judge,0,sizeof judge);
    for(int i=1;i<=n;i++)
    {
        cin>>q[i].l>>q[i].w;
    }
    sort(q+1,q+1+n,cmp);
    for(int i=1;i<=n;i++)
    {
        for(int j=q[i].w;j>=1;j--)
        {
            if(judge[j]==1)
            {
                judge[j]=0;
                break;
            }
        }
        judge[q[i].w]=1;
    }
    int sum=0;
    for(int i=1;i<=10001;i++)
    {
        if(judge[i]) sum++;
    }
    cout<<sum;
    return 0;
}

