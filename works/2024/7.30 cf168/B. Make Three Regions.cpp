#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        int sum=0;
        for(int i=0;i<n-2;i++)
        {
            if(a[i]=='x'&&a[i+1]=='.'&&a[i+2]=='x'&&b[i]=='.'&&b[i+2]=='.')
            {
                sum++;
            }
            if(b[i]=='x'&&b[i+1]=='.'&&b[i+2]=='x'&&a[i]=='.'&&a[i+2]=='.')
            {
                sum++;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}