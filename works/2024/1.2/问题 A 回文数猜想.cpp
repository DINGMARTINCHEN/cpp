#include<bits/stdc++.h>
using namespace std;
int hui(long long a)
{
    long long sum=0;
    while(a)
    {
        sum=sum*10+a%10;
        a/=10;
    }
    return sum;
}
int main()
{
    long long a;
    cin>>a;
    cout<<a<<"+"<<hui(a)<<"="<<hui(a)+a<<endl;
    for(int i=0;i<99999;i++)
    {
        a=hui(a)+a;
        if(hui(a)==a)
        {
            return 0;
        }
        cout<<a<<"+"<<hui(a)<<"="<<hui(a)+a<<endl;
    }
    
}