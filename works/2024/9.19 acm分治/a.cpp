#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

double check(double a)
{
    return exp(a*log(2))+exp(a*log(3))-exp(a*log(4)) ;
}

signed main() 
{
    double l=1,r=2,mid;
    while(abs(l-r)>1e-10)
    {
        mid=(l+r)/2;
        if(check(mid)==0)
        {
            cout<<fixed<<setprecision(10)<<mid;
            return 0;
        }
        if(check(mid)*check(l)<0)
        {
            r=mid;
        }
        else
        {
            l=mid;
        }
    }
    cout<<fixed<<setprecision(10)<<l;
    return 0;
}