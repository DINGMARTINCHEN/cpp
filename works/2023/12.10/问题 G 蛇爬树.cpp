#include<iostream>
using namespace std;
int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    if((c)%(a-b)==0)
    {
        cout<<(c)/(a-b)-1;
    }
    else{
        cout<<(c)/(a-b);
    }
}