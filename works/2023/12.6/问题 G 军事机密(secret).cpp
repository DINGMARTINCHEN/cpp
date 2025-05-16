#include<bits/stdc++.h>
using namespace std;
int a[9999999],n,b[9999999],k;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>k;
    for(int i=0;i<k;i++)
    {
        cin>>b[i];
    }
    sort(a,a+n);
    for(int i=0;i<k;i++)
    {
        cout<<a[b[i]-1]<<endl;
    }
    return 0;
}