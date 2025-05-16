#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int n;
    cin>>n;
    int t=0,k=1;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        t+=(a/5)*3;
        a%=5;
        while(a>0)
        {
            if(k==1||k==2)
            {
                a--;
                k++;
            }
            else
            {
                a-=3;
                k=1;
            }
            t++;
        }
    }
    cout<<t;
    return 0;
}