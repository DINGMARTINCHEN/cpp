#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b,sum1=0,sum2=0,sum3=0;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a>b)
        {
            sum1++;
        }
        if(a==b)
        {
            sum3++;
        }
        if(a<b)
        {
            sum2++;
        }
    }
    cout<<sum1<<" "<<sum2<<" "<<sum3;
}