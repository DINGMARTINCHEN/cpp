#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int process(int a,int b,int x,int y)
{
    int minn=9999;
    int money=0;
    int ddd=0;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;i++)
        {
            money=a*i+b*j;
            ddd=abs(money-100);
            if(ddd<minn)
            {
                minn=ddd;
            }
        }
    }
    return minn;
}

int main() 
{
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    int ans=process(a,b,x,y);
    cout<<ans;
    return 0;
}