#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

void process()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        sum+=pow(-1,i)*a;
    }
    cout<<sum<<endl;
}

signed main() 
{
    int n;
    cin>>n;
    while(n--)
    {
        process();
    }
    return 0;
}