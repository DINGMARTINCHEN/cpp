#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,space;
    cin>>n>>space;
    int a[n];
    int sum=1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // sort(a,a+n);
    int bus=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]+bus<=space)
        {
            bus+=a[i];
        }
        else{
            bus=a[i];
            sum++;
        }
    }
    cout<<sum;
}