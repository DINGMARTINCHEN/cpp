#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a[9999],b[9999];
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        for(int j=0;j<n;j++)
    {
        if(a[j]==b[i])
        {
            cout<<a[j]<<endl;
        }
    }
    }

}