#include<bits/stdc++.h>
using namespace std;
int main()
{
    string aa,aa1;
    int a,b,c,sum2=0,sum1=0,a1,b1,c1;
    cin>>aa>>a>>b>>c;
    sum1=a+b+c;
    cin>>aa1>>a1>>b1>>c1;
    sum2=a1+b1+c1;
    cout<<sum1<<" "<<sum2<<endl;
    if(sum1>sum2)
    {
        cout<<aa<<" is better.";
    }
    else if(sum1==sum2)
    {
        if(a1>a)
        {
            cout<<aa<<" is better.";
        }
        if(a1<a)
        {
            cout<<aa1<<" is better.";
        }
        if(a1==a)
        {
            cout<<"They're excellent.";
        }
    }
    else
    {
        cout<<aa1<<" is better.";
    }
}