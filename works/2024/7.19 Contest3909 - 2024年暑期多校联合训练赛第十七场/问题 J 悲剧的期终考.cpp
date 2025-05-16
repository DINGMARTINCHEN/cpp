#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

struct numbers
{
    ll num;
    ll sum;
};

bool cmp(numbers a,numbers b)
{
    if(a.sum>b.sum)
    {
        return true;
    }
    else if(a.sum==b.sum)
    { 
        if(a.num<b.num)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

int main() 
{
    int n;
    cin>>n;
    numbers a[30009];
    for(int i=0;i<30009;i++)
    {
        a[i].sum=0;
        a[i].num=0;
    }
    for(int i=0;i<n;i++)
    {
        ll b;
        cin>>b;
        a[b].sum++;
        a[b].num=b;
    }
    sort(a,a+30009,cmp);
    ll flag=a[0].sum;
    for(int i=0;i<n;i++)
    {
        if(a[i].sum==flag)
        {
            cout<<a[i].num<<" "<<a[i].sum<<endl;
        }
        else
        {
            return 0;
        }
    }
    return 0;
}
