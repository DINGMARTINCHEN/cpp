#include<bits/stdc++.h>
const int N=1e8;
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            sum+=((a[i]+a[j])%N);
        }
    }
    cout<<sum;
}