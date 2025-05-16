#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

double ans[3],a,b,c,d;

double check(double x)
{
    return a*x*x*x+b*x*x+c*x+d;
}

signed main() 
{

    cin>>a>>b>>c>>d;
    for(int i=-100;i<=100;i++)
    {
        double x1=i,x2=i+1;
        if(check(x1)==0)
        {
            printf("%0.2lf ",x1);
        }
        else if(check(x1)*check(x2)<0)
        {
            while(x2-x1>=0.001)
            {
                double mid=0;
                mid=(x1+x2)/2;
                if(check(x1)*check(mid)<=0)
                {
                    x2=mid;
                }
                else
                {
                    x1=mid;
                }
            }
            printf("%0.2lf ",x1);
        }
    }
    return 0;
}