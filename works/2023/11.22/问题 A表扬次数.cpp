#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int a,b,c,s=0;
    cin>>a>>b>>c;
    s=a+b+c;
    for(int i=1;i<n;i++)
    {
        cin>>a>>b>>c;
        if(a+b+c>s)
        {
            sum++;
        }
        s=a+b+c;
    }
    cout<<sum;
}