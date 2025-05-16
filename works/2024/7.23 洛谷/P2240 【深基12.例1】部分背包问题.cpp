#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

struct coins
{
    double w,m;
    double value;
}coin[105];

bool cmp(coins a,coins b)
{
    return a.value>b.value;
}

int main() 
{
    int n,t;
    cin>>n>>t;
    for(int i=0;i<n;i++)
    {
        cin>>coin[i].m>>coin[i].w;
        coin[i].value=1.0*coin[i].w/coin[i].m;
    }
    sort(coin,coin+n,cmp);
    double sum=0;
    for(int i=0;i<n;i++)
    {
        if(t>=coin[i].m)
        {
            t-=coin[i].m;
            sum+=coin[i].w;
        }
        else
        {
            sum+=t*coin[i].value;
            break;
        }
    }
    cout<<fixed<<setprecision(2)<<sum;
    return 0;
}