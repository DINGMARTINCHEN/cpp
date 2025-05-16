#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N=2e5+5;

map<int,int>a;

struct ppp
{
    int num;
    int len;
    bool vis;
}b[N];

struct plans
{
    int tmp;
    int stick;
}plan[N];

bool cmpn(ppp a,ppp b)
{
    return a.num<b.num;
}

bool cmpl(ppp a,ppp b)
{
    return a.len>b.len;
}

signed main() 
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int zzzz;
        cin>>zzzz;
        a[zzzz]++;
        b[i].len=zzzz;
        b[i].num=i;
        b[i].vis=0;
        plan[i].tmp=0;
    }
    int stick=0;
    int maxn=0;
    int t=0;
    for(auto iter=a.rbegin();iter!=a.rend();iter++)
    {
        stick+=iter->second;
            int tmp=stick*stick*iter->first;
            maxn=max(maxn,tmp);
            plan[t].stick=stick;
            plan[t].tmp=tmp;
            t++;
    }
    sort(b+1,b+1+n,cmpl);
    int stick_new=0;
    for(int i=0;i<=t;i++)
    {
        if(plan[i].tmp==maxn)
        {
            stick_new=plan[i].stick;
        }
    }
    for(int i=1;i<=stick_new;i++)
    {
        b[i].vis=1;
    }
    sort(b+1,b+1+n,cmpn);
    cout<<stick_new<<endl;
    for(int i=1;i<=n;i++)
    {
        if(b[i].vis==1)
        {
            cout<<b[i].num<<" ";
        }
    }
    return 0;
}