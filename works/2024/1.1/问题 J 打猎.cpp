#include<bits/stdc++.h>
using namespace std;
inline int gcd(long long a,long long b) {
    int r;
    while(b>0) {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}
bool judge(long long a,long long b,long long c,long long d)
{
    int e=abs(a-c),f=abs(b-d);
    if(gcd(e,f)==1)
    {
        return true;
    }
    // else if((a==c&&abs(b-d)==1)||(b==d&&abs(a-c)==1))
    // {
    //     return true;
    // }
    // else if(a==c&&b==d)
    // {
    //     return true;
    // }
    else
    {
        return false;
    }
}
int main()
{
    long long n,a[9999],b[9999],c[9999],d[9999];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i]>>c[i]>>d[i];
    }
    for(int i=0;i<n;i++)
    {
        if(judge(a[i],b[i],c[i],d[i])==false)
        {
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
}