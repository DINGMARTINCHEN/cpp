#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() 
{
    int n,d;
    cin>>n>>d;
    string a;
    cin>>a;
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='@')
        {
            sum1++;
        }
        else{
            sum2++;
        }
    }
    cout<<sum2+min(d,sum1);
    return 0;
}