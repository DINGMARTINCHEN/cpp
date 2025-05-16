#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    long long a[9999],n;
    int i=0;
    while(cin>>n)
    {
        a[i]=sqrt(n);
        if(a[i]*a[i]==n||(a[i]-1)*(a[i]-1)==n)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
        i++;
    }
    return 0;
}