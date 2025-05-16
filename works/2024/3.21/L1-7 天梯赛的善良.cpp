#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long maxn=0,minn=999999,maxsum=0,minsum=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(maxn<a)
        {
            maxn=a;
            maxsum=0;
        }
        if(maxn==a)
        {
            maxsum++;
        }
        if(minn>a)
        {
            minn=a;
            minsum=0;
        }
        if(minn==a)
        {
            minsum++;
        }
    }
    cout<<minn<<" "<<minsum<<endl<<maxn<<" "<<maxsum;
}