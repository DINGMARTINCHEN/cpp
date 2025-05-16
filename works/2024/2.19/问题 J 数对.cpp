#include<bits/stdc++.h>
using namespace std;
void process(long long a,long long b)
{
    long long sum=0;
    for(long long i=0;i<min(a,b);i++)
    {
        for(long long j=0;j<min(a,b);j++)
        {
            if(i+j==a&&i*j==b)
            {
                sum++;
            }
        }
    }
    cout<<sum<<endl;
}
int main()
{
    long long n; 
    cin>>n;
    long long a[n],b[n];
    for(long long i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(long long i=0;i<n;i++)
    {
        process(a[i],b[i]);
    }
}