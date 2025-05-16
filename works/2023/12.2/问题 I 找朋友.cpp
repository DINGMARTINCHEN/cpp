#include<bits/stdc++.h>
using namespace std;
string a[99999];
string b[99999];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    int z=0;
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        for(int j=0;j<n;j++)
        {
            if(a[j]==b[i])
            {
                cout<<a[j];
            }
        }
    }
}