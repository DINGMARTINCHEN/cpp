#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
ll l[100000],r[100000];

int main() 
{
    int n;
    cin>>n;
    ll lsum=0,rsum=0;
    int ans[100000];
    for(int i=0;i<n;i++)
    {
        cin>>l[i]>>r[i];
        lsum+=l[i];
        rsum+=r[i];
    }
    if(!(lsum<0&&rsum>0))
    {
        cout<<"No";
        return 0;
    }
    return 0;
}
