#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

struct people
{
    int num;
    int t;
}a[1009];

bool cmp(people a,people b)
{
    return a.t<b.t;
}

int main() 
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i].t;
        a[i].num=i+1;
    }
    sort(a,a+n,cmp);
    double sum=0;
    for(int i=0;i<n;i++)
    {
        cout<<a[i].num<<" ";
        sum+=(a[i].t*(n-1-i));
    }
    cout<<endl<<fixed<<setprecision(2)<<1.0*sum/n;
    return 0;
}