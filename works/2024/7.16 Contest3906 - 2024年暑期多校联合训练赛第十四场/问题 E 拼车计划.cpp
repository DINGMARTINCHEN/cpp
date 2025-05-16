#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
ll sum=0;

int main() 
{
    int n;
    cin>>n;
    double a[n];
    double m;
    cin>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    for(int i=0;i<n;i++)
    {
        double c=a[i]+1.0*(m-sum)/n;
        c*=100;
        c=ceil(c);
        cout<<fixed<<setprecision(2)<<c*1.0/100<<" ";
    }
    return 0;
}