#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() 
{
    int n;
    cin>>n;
    int a;
    int sum=0;
    for (int i = 0; i < n; ++i) 
    {
        cin>>a;
        sum^=a;
    }
    if(sum==0)
    {
        cout<<"Puss in Boots"<<endl;
    }
    else
    {
        cout<<"Donkey"<<endl;
    }
    return 0;
}