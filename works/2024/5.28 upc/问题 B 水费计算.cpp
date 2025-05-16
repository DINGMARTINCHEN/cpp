#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<=180)
    {
        cout<<fixed<<setprecision(2)<<n*2.3;
    }
    else if(n>180&&n<=240)
    {
        cout<<fixed<<setprecision(2)<<414+(n-180)*3.45;
    }
    else
    {
        cout<<fixed<<setprecision(2)<<414+207+(n-240)*6.9;
    }
}