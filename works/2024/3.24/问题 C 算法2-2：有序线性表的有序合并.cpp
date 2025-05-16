#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    while(cin>>n)
    {
        long long a[9999];
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>m;
        for(long long i=0;i<m;i++)
        {
            cin>>a[n+i];
        }
        sort(a,a+n+m);
        for(long long i=0;i<m+n;i++)
        {
            cout<<a[i];
            if(i<m+n-1)
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    
}