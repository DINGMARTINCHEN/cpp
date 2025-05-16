#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() 
{
    char z;
    int a=0,b=0,c=0;
    for(int i=0;i<3;i++)
    {
        cin>>z;
        if(z=='A')
        {
            a++;
        }
        if(z=='B')
        {
            b++;
        }
        if(z=='C')
        {
            c++;
        }
    }
    if(a==1&&c==1&&b==1)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}