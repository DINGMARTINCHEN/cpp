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
        int sum=0;
        for(int i=0;i<n;i++)
        {
            char a;
            cin>>a;
            if(a=='(')
            {
                sum++;
            }
        }
        cout<<n/2+2*sum<<endl;
    }
    return 0;
}