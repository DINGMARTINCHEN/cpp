#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N=2e5+5;
const int M=1e6+10;

// int a[N];
map<int,int>mp;

struct ppppp
{
    int num;
    int len;
    bool vis;
}a[N];

struct plans
{
    int tmp;
    int stick;
}plan[N];

bool cmpl(ppppp a,ppppp b)
{
    return a.len>b.len;
}

bool cmpn(ppppp a,ppppp b)
{
    return a.num<b.num;
}

signed main() 
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].len;
        a[i].num=i;
        a[i].vis=0;
        mp[a[i].len]++;
    }
    int maxn=0;
    sort(a+1,a+1+n,cmpl);
    int minn=M;
    int flag=0;
    a[1].vis=1,a[2].vis=1;


    // for(int i=3;i<=n+1;i++)
    // {
    //     minn=min(minn,a[i].len);
    //     int tmp=i*i*minn;
    //     // cout<<tmp<<"==="<<i<<endl;
    //     if(maxn<=tmp)
    //     {
    //         maxn=tmp;
    //         flag=i;
    //         a[i].vis=1;
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }
    int t=1;
    // int f=0;
     plan[0].stick=0;
    for(auto iter=mp.rbegin();iter!=mp.rend();iter++)//·´Ïòµü´ú
    {
        plan[t].stick=iter->second+plan[t-1].stick;
        if(plan[t].stick>=3)
        {            
            plan[t].tmp=iter->first*plan[t].stick*plan[t].stick;
            maxn=max(maxn,plan[t].tmp);
        }
    }
    for(int i=1;i<=t;i++)
    {
        if(plan[i].tmp==maxn)
        {
            cout<<plan[i].stick<<"===="<<endl;
            for(int j=1;j<=plan[i].stick;j++)
            {
                a[j].vis=1;
            }
        }
    }


    // cout<<flag<<endl;
    sort(a+1,a+1+n,cmpn);
    for(int i=1;i<=n;i++)
    {
        if(a[i].vis==1)
        {
            cout<<a[i].num<<" ";
        }
    }
    return 0;
}
/*

6
1 2 3 4 5 6

*/