#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main() 
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int a[n];
        ll sum=0;
        for(int j=0;j<n;j++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%2==0)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
        cout<<endl;
    }
    return 0;
}