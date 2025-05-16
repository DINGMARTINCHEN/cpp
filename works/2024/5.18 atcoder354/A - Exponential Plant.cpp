#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0,i;
    for(i=0;sum<n;i++)
    {
        sum+=pow(2,i);
        // if(sum==n)
        // {
        //     cout<<i+1;
        // }
        // else
        // {
        //     cout<<i;
        // }
        // cout<<1+i<<" "<<sum<<endl;
    }
    if(sum==n)
    {
        cout<<i+1;
    }
    else
    {
        cout<<i;
    }
}