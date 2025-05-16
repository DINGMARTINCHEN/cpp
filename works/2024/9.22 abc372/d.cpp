#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

void process(int a[],int n,int b)
{
    int sum=0;
    for(int i=b+1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            if(a[j]<a[i])
            {
                break;
            }
            if(j==n)
            {
                sum++;
            }
        }
    }
    cout<<sum<<" ";
}

signed main() 
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        process(a,n,i);
    }
    return 0;
}
/*
5
2 1 4 3 5

*/