#include<bits/stdc++.h>
using namespace std;
long long a[999999],t;
int main()
{
    long long n,max=0;
    cin>>n;
    long long b;
    for(int i=0;i<n;i++)
    {
        cin>>b;
        a[b]++;
        if(max<a[b])
        {
            max=a[b];
            t=b;
        }
    }
    for(int i=0;i<=30000;i++)
    {
        if(a[i]==max)
        {
            cout<<i<<" "<<a[i]<<endl;
        }
    }
    return 0;
}