#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() 
{
    map<int,int>mp;
    for(int i=0;i<4;i++)
    {
        int b;
        cin>>b;
        mp[b]++;
    }
    int sum=0;
    for(auto iter=mp.begin();iter!=mp.end();iter++)//ÕýÏòµü´ú
    {
        if(iter->second==2&&iter->second==3)
        {
            sum++;
        }
        if(iter->second==4)
        {
            cout<<2;
            return 0;
        }
        // cout<<iter->first<<" "<<iter->second<<endl;
    }
    cout<<sum;
    return 0;
}