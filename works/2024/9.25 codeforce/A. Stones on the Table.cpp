#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int n;
    cin>>n;
    string a;
    cin>>a;
    int sum=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==a[i+1])
        {
            sum++;
        }
    }
    cout<<sum;
    return 0;
}