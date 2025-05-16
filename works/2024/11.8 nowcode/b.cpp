#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() 
{
    double a;
    for(int i=0;i<3;i++)
    {
        cin>>a;
    }
    double b;
    cin>>b>>a;
    a+=b;
    double m=pow(1-a,10);
    double c=10*a*pow(1-a,9);
    cout<<fixed<<setprecision(7)<<1-m-c;
    return 0;
}