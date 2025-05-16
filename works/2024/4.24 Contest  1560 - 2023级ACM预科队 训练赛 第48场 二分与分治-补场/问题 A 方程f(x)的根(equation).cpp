#include<bits/stdc++.h>
 
using namespace std;
 
double l,r;
 
double f(double x)
{
    return pow(0.5,x)+pow(0.75,x)-1;
}
 
int main()
{
    cin>>l>>r;
    double m=(l+r)/2;
    while(abs(r-l)>1e-4||abs(f(m))>1e-4)
    {
        if (f(m)*f(r)<0)
        {            
            l=m;
        }
        if (f(m)*f(l)<0)
        {
            r=m;
        }
        m=(l+r)/2;
    }
    cout<<fixed<<setprecision(10)<<m<<endl;
    return 0;
}