#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        int n,m,k;
        cin>>n>>m>>k;
        for(int i=n;i>=k;i--)
        {
            cout<<i<<" ";
        }
        for(int i=m+1;i<=k-1;i++)
        {
            cout<<i<<" ";
        }
        for(int i=1;i<=m;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}