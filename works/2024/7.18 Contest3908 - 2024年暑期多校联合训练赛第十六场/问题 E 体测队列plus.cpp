#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main() 
{
    int n;
    cin>>n;
    int maxn=0;
    int f_max=0;
    for(int i=0;i<n;i++)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll sum=c/b*a;
        if(sum>maxn)
        {
            maxn=sum;
            f_max=i+1;
        }
    }
    cout<<f_max;
    return 0;
}