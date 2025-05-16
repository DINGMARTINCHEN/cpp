#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int n;
    cin>>n;
    int b[n+1];
    for(int i=n;i>=0;i--)
    {
        cin>>b[i];
    }
    for(int i=n;i>=0;i--)
    {
        int a=b[i];
        if(a<0)
        {
            cout<<'-';
        }
        if(a>0)
        {
            if(i!=n)//符号
            {
                cout<<'+';
            }
        }
        if(a!=1&&a!=-1&&a!=0)//系数
        {
            cout<<abs(a);
        }
        if(a!=0)//次方
        {
            if(i==0)
            {
                if(a==1||a==-1)
                {
                    cout<<1;
                }
            }
            else if(i==1)
            {
                cout<<'x';
            }
            else
            {
                cout<<"x^"<<i;
            }
        }
    }
    return 0;
}