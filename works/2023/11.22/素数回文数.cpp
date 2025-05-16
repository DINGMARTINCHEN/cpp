#include<iostream>
#include <cmath>
using namespace std;
bool hui(int n)//判断回文数
{
    if(n<10)
    {
        return true;
    }
    else if(n>=10)
    {
        int y=n,sum=0;
        while(y)
        {
            sum=sum*10+y%10;
            y/=10;
        }
        if(sum==n)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    return true;
}
bool su(int n)//判断素数
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    long long  a,b;
    cin>>a>>b;
    for(long long i=a;i<=b;i++)
    {
        if(hui(i)&&su(i))
        {
            cout<<i<<endl;
        }
    }
    return 0;
}