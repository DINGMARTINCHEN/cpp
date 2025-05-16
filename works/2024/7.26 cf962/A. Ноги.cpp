#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main() 
{
    ll n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a%4==0)
        {
            cout<<a/4<<endl;
        }
        else
        {
            cout<<a/4+1<<endl;
        }
    }
    return 0;
}