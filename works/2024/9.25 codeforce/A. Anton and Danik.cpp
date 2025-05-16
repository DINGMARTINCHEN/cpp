#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int n;
    cin>>n;
    int sum=0,ssum=0;
    for(int i=0;i<n;i++)
    {
        char a;
        cin>>a;
        if(a=='D')
        {
            sum++;
        }
        else
        {
            ssum++;
        }
    }
    if(ssum>sum)
    {
        cout<<"Anton";
    }
    else if(ssum==sum)
    {
        cout<<"Friendship";
    }
    else
    {
        cout<<"Danik" ;
    }
    return 0;
}