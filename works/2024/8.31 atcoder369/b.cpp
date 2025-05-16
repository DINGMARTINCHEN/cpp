#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int n;
    cin>>n;
    int prel=-1,prer=-1;
    int suml=0,sumr=0;
    for(int i=0;i<n;i++)
    {
        char a;
        int b;
        cin>>b>>a;
        if(a=='L')
        {
            if(prel!=-1)
            {
                suml+=(abs(prel-b));
            }
            prel=b;
        }
        else
        {
            if(prer!=-1)
            {
                sumr+=(abs(prer-b));
            }
            prer=b;
        }
    }
    cout<<suml+sumr;
    return 0;
}