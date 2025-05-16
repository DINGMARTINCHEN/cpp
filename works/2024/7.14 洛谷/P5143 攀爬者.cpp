#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main() 
{
    int n;
    cin>>n;
    double sum=0;
    double pre1=0,pre2=0,pre3=0;
    for(int i=0;i<n;i++)
    {
        double a,b,c;
        cin>>a>>b>>c;
        sum+=sqrt(pow(a-pre1,2)+pow(b-pre2,2)+pow(c-pre3,2));
        pre1=a;
        pre2=b;
        pre3=c;
    }
    cout<<fixed<<setprecision(3)<<sum;
    return 0;
}