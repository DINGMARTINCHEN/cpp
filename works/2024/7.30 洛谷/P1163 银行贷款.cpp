#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main() 
{
    double a,b,c;
    cin>>a>>b>>c;
    double l=0,r=1000,mid=0;
    while(l<r-0.000001)
    {
        mid=(l+r)/2;
        double w=a;
        for(int i=0;i<c;i++)
        {
            w=w-b+w*(mid/100);
        }
        if(w>0.000001)
        {
            r=mid;
        }
        else
        {
            l=mid;
        }
    }
    cout<<fixed<<setprecision(1)<<l;
    return 0;
}
// 1000000000 2147483647 123
// 214.7