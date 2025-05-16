#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t;
    cin>>a>>b>>t;
    if(t<a)
    {
        cout<<a;
    }
    else
    {
        cout<<(t-a)/b+3;
    }
}