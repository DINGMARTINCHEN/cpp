#include<bits/stdc++.h>
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
    sort(a,a+n);
    for(int i=n;i>1;i--)
    {
        a[0]+=a[1];
        a[1]=a[i]+1;
        sum+=a[0];
        sort(a,a+i);
        // cout<<a[0]<<endl;
        
    }
    // cout<<endl;
    cout<<sum;
}