#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main()
{
    ull n;
    cin>>n;
    map<ull,ull>mp;
    for(int i=0;i<n;i++)
    {
        ull a;
        cin>>a;
        mp[a]++;
        if(mp[a]>n/2)
        {
            cout<<a;
            return 0;
        }
    }
}
//7
//0 0 0 3 3 3 