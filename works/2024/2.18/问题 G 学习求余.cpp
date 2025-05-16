#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n;
    k=n/2+1;
    long long q=n%k;
    long long sum;
    sum=q*k;
    cout<<sum;
    // int max=0;
    // for(int i=1;i<=n;i++)
    // {
    //     int q=n%i;
    //     int sum;
    //     sum=q*i;
    //     cout<<i<<" "<<sum<<endl;
    //     if(max<sum)
    //     {
    //         max=sum;
    //     }
    // }
    //100 -- 51       ||101   --  51
}