#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int weishu_sum(ll a)
{
    int sum=0;
    while(a!=0)
    {
        sum+=a%10;
        a/=10;
    }
    return sum;
}

ll lenth(ll a)
{
    ll sum=1;
    while(a>=10)
    {
        a/=10;
        sum*=10;
    }
    return sum;
}

int main() 
{
    ll l,r;
    cin>>l>>r;
    ll len=lenth(r);
    int c=r/len*len;
    cout<<c-1<<endl<<weishu_sum(len-1)+(c-1)/len;
    return 0;
}