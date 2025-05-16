#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        int z;
        cin>>z;
        a[i]=z;
    }
    int b;
    cin>>b;
    for(int i=0;i<n;i++)
    {
        if(a[i]==b)
        {
            cout<<i+1;
            return 0;
        }
    }
    cout<<-1;
}