#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int minn=1e9;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        minn=min(minn,a[i]);
    }
    int x;
    cin>>x;
    for(int i=1;i;i++)
    {
        if(x/i<minn)
        {
            cout<<i;
            return 0;
        }
    }
}