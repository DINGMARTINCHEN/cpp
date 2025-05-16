#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main() 
{
    int n,m;
    cin>>n>>m;
    int maxn=0,flag=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<m;j++)
        {
            int a;
            cin>>a;
            if(a==1)
            {
                sum++;
            }
        }
        if(maxn<sum)
        {
            maxn=sum;
            flag=i+1;
        }
    }
    cout<<flag;
    return 0;
}