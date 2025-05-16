#include<iostream>
using namespace std;
int main()
{
    long long n;
    int sum=9999;
    cin>>n;
    int a5,a4,a3,a2,a1;
//    a5=n/5;
//    a4=(n-5*a5)/4;
    a3=(n-5*a5-4*a4)/3;
    a2=(n-5*a5-4*a4-3*a3)/2;
    a1=n-5*a5-4*a4-3*a3-2*a2;
    cout<<a1+a2+a3+a4+a5;
    return 0;
 } 
