#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    long long sum=0;
    cin>>n>>m;
    sum=2*m;
    for(int i=m+1;i<=n;i++)
    {
        sum+=i;
    }
    cout<<sum;
}