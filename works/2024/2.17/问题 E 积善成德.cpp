#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a>0)
        {
            sum+=a;
        }
        else
        {
            sum+=(a*10);
        }
    }
    if(sum<0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    cout<<sum;
}