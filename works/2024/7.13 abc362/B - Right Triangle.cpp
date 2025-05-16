#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main() 
{
    int x1,x2,x3,y1,y2,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    ll a,b,c;
    a=pow(x1-x2,2)+pow(y1-y2,2);
    b=pow(x2-x3,2)+pow(y3-y2,2);
    c=pow(x1-x3,2)+pow(y1-y3,2);
    ll maxn=max(max(a,b),c);
    ll minn=min(min(a,b),c);
    ll sum=a+b+c-maxn-minn;
    if(minn+sum==maxn)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}
