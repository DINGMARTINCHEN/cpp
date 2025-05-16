#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a+1==b&&b<15)
    {
        cout<<b+1;
    }
    else if(a+1==b&&b==15)
    {
        cout<<14;
    }
    else if(a-1==b&&b==0)
    {
        cout<<1;
    }
    else
    {
        cout<<b-1;
    }
}