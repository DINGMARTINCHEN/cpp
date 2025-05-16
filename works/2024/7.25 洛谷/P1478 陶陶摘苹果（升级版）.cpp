#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

struct ppp
{
    ll height,cost;
}a[5005];

bool cmp(ppp a,ppp b)
{
    return a.cost<b.cost;
}

int main() 
{
    int n,s,h,l;
    cin>>n>>s>>h>>l;
    int f=0;
    for(int i=0;i<n;i++)
    {
        int aa,bb;
        cin>>aa>>bb;
        if(aa<=h+l)
        {
            a[f].height=aa;
            a[f].cost=bb;
            f++;
        }
    }
    int sum=0;
    sort(a,a+f,cmp);
    for(int i=0;i<f;i++)
    {
        if(s>=a[i].cost)
        {
            s-=a[i].cost;
            sum++;
        }
    }
    cout<<sum;
    return 0;
}