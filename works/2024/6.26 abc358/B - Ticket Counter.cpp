#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int Time=a[0];
    for(int i=0;i<n;i++)
    {
        Time=max(Time+t,a[i]+t);
        cout<<Time<<endl;
    }
}