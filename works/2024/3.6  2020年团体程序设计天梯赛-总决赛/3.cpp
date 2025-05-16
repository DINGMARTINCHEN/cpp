#include<bits/stdc++.h>
using namespace std;
double a,b,c;
int z;
int main()
{
    cin>>a>>z>>b;
    if(z==0)
    {
        c=2.455;
    }
    else{
        c=1.26;
    }
    cout<<fixed<<setprecision(2)<<a*c;
    if(a*c<=b)
    {
        cout<<" ^_^";
    }
    else
    {
        cout<<" T_T";
    }
}