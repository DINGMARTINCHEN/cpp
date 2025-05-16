#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int n;
    cin>>n;
    int sum=0,t=1;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(t%3==1)
        {
        }
        else if(t%3==2)
        {
            a-=2;
            sum+=2;
            t+=2;
        }
        else if(t%3==0)
        {
            a-=3;
            sum++;
            t++;
        }
        if(a%5==1)
        {
            sum+=(3*(a/5)+1);
        }
        else if(a%5==2)
        {
            sum+=(3*(a/5)+2);
        }
        else if(a%5==3||a%5==4)
        {
            sum+=(3*(a/5)+3);
        }
        else
        {
            sum+=(3*(a/5));
        }
    }

    cout<<sum;
    return 0;
}