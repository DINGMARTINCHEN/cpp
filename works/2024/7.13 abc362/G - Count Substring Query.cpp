#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
const ll N=5e5+10;
ll sssfind(std::string a,std::string f)
{
    ll pos=0;
    ll sum=0;
    while(1)
    {
        ll p=a.find(f,pos);
        if(p!=string::npos)
        {
            pos=p+1;
            sum++;
        }
        else
        {
            break;
        }
    }
    return sum;
}

int main() 
{
    std::string a;
    ll n;
    // scanf("%s %lld",a,n);// 
    cin>>a;
    // scanf("%lld",n);// 
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        string f;
        // scanf("%s",f);// 
        cin>>f;
        ll c=sssfind(a,f);
        // printf("%lld\n",c);// 
        cout<<c<<endl;
    }
    return 0;
}