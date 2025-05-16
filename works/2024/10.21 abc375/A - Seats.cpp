#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    string a;
    int n;
    cin>>n;
    cin>>a;
    int sum=0;
    for(int i=1;i<a.size()-1;i++)
    {
        if(a[i]=='.'&&a[i-1]=='#'&&a[i+1]=='#')
        {
            sum++;
        }
    }
    cout<<sum;
    return 0;
}