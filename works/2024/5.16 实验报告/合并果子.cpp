#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long a[n];
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long point=0;
    long long sum=0;
    while(point!=n-1)
    {
        if(a[point]!=-1)
        {
            a[point]+=a[point+1];
            sum+=a[point];
            a[point+1]=-1;
            point++;
        }
        sort(a,a+n);
    }
    cout<<sum;
}