#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    string a;
    cin>>a;
    int maxn=0,sum=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==a[i+1])
        {
            sum++;
        }
        else
        {
            maxn=max(maxn,sum);
            sum=0;
        }
    }
    if(maxn>=6)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}