#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,sum=0;
    cin>>n>>b;
    int a[99999];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            // if(abs(a[i]-a[j])==b)
            if(a[i]-a[j]==b)
            {
                sum++;
            }
        }
    }
    cout<<sum;
}