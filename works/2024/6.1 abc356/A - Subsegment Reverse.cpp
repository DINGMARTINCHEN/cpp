#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,e;
    cin>>n>>s>>e;
    for(int i=1;i<s;i++)
    {
        cout<<i<<" ";
    }
    for(int i=e;i>=s;i--)
    {
        cout<<i<<" ";
    }
    for(int i=e+1;i<=n;i++)
    {
        cout<<i<<" ";
    }
}