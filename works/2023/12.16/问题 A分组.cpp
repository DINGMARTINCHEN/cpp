#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a;
    cin>>a;
    if(a%6==0)
    {
        cout<<a/6;
    }
    else
    {
        cout<<a/6+1;
    }
}