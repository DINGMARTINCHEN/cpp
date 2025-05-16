#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int n,prex=0,prey=0;
    cin>>n;
    double sum=0;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        sum+=(pow(pow(x-prex,2)+pow(prey-y,2),0.5));
        prex=x;
        prey=y;
    }
    sum+=(pow(pow(0-prex,2)+pow(prey-0,2),0.5));
    printf("%f",sum);
    return 0;
}