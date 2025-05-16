#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double x,y;
    cin>>x>>y;
    if(x/y/y>25) 
    {
        cout<<fixed<<setprecision(1)<<x/y/y<<endl<<"PANG";
    }
    else{
        cout<<fixed<<setprecision(1)<<x/y/y<<endl<<"Hai Xing";
    }
}