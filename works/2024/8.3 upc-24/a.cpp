#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int n;
    cin>>n;
    map<int,int>mp;
    int maxn=0;
    int pre;
    cin>>pre;
    int sum=0;
    for(int i=1;i<n;i++)
    {
        int a;
        cin>>a;
        if(a==pre)
        {
            sum++;
        }
        else
        {
            sum=0;
        }
    }
    cout<<mp[maxn]<<" "<<maxn;
    return 0;
}