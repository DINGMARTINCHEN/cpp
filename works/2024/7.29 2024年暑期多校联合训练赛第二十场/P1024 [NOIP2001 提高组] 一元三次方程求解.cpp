#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main() 
{
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    for(double i=-100.00;i<=100.00;i+=0.001)
    {
        if(fabs(i*i*i*a+i*i*b+i*c+d)<0.0001)
        {
            cout<<fixed<<setprecision(2)<<i<<" ";
        }
    }
    return 0;
}