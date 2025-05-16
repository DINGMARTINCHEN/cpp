#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll process(ll a)
{
    int sum=0;
    while(a!=0)
    {
        sum+=a%10;
        a/=10;
    }
    return sum;
}

int main()
{
    ll l,r;
    cin>>l>>r;
    ll maxn=0,flag=0;
    for(ll i=l;i<=r;i++)
    {
        ll c=process(i);
        if(maxn<process(i))
        {
            maxn=c;
            flag=i;
        }
    }
    cout<<flag<<endl<<maxn;
}
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cout<<process(i)<<"  "<<i<<endl;
//     }
// }
//1000000000000000000
//1000000000000050000