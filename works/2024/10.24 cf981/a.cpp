#include <bits/stdc++.h>
#define int long long
using namespace std;

void process()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        cout<<"Sakurako"<<endl;
    }
    else
    {
        cout<<"Kosuke"<<endl;
    }
}

signed main() 
{
    int n;
    cin>>n;
    while(n--)
    {
        process();
    }
    return 0;
}