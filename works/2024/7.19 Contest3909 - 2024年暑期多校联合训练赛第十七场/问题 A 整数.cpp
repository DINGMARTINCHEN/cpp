#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main() 
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ull a,b;
        cin>>a>>b;
        if(a<0)
        {
            a=-a;
        }
        if(b<0)
        {
            b=-b;
        }
        if(a%b!=0)
        {
            cout<<i+1;
            return 0;
        }
    }
    cout<<0;
    return 0;
}