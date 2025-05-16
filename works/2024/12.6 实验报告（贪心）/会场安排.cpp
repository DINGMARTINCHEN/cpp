#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N=100;

int pre[N];

struct node 
{
    int s,e;
}a[N];

bool cmp(node a,node b)
{
    return a.s<b.s;
}

signed main() 
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i].s>>a[i].e;
    }
    sort(a,a+n,cmp);
    pre[0]=a[0].e;
    for(int i=1;i<n;i++)
    {
        int tmp=0;
        while(1)
        {
            if(pre[tmp]>a[i].s)
            {
                tmp++;
            }
            if(pre[tmp]<=a[i].s)
            {
                pre[tmp]=a[i].e;
                break;
            }
        }
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(pre[i]!=0)
        {
            sum++;
        }
    }
    cout<<sum;
    return 0;
}