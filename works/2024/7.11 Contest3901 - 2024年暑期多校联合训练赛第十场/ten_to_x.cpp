#include<bits/stdc++.h>
using namespace std;
string ten_to_x(int n,int x)
{
    string a="";
    if(n==0)
    {
        a="0";
    }
    while(n!=0)
    {
        int t=n%x;
        if(t<=9&&t>=0)
        {
            a+=(t+'0');
        }
        else
        {
            a+=(t+'A'-10);
        }
        n/=x;
    }
    reverse(a.begin(),a.end());//·´×ªa
    return a;
}

int main()
{
    cout<<ten_to_x(64,2);
}