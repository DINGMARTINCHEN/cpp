#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int sum=0;
    for(int i=0;i<12;i++)
    {
        string a;
        cin>>a;
        if(a.size()==i+1)
        {
            sum++;
        }
    }
    cout<<sum;
    return 0;
}