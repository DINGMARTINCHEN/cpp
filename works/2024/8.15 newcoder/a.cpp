#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int sumy=0,sum_=0,sumn=0;
    for(int i=0;i<5;i++)
    {
        char a;
        cin>>a;
        if(a=='Y')
        {
            sumy++;
        }
        if(a=='N')
        {
            sumn++;
        }
        if(a=='-')
        {
            sum_++;
        }
    }
    if(sumy>=4)
    {
        cout<<1;
        return 0;
    }
    if(sum_>=2)
    {
        cout<<0;
        return 0;
    }
    if(sumn>=2)
    {  
        cout<<-1;
        return 0;
    }
    return 0;
}