#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main() 
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ll x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        ll a,b;
        a=x1+x2;
        b=abs(y1-y2);
        double ans=sqrt(pow(a,2)+pow(b,2));
        int aan=floor(ans);
        if(ans!=aan)
        {
            cout<<fixed<<setprecision(10)<<ans<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }
}
// 4844038028
// 5 1 3 3 3 1 1 1 1 1 5 4 2 11 4 5 14 19 1 9 810
    