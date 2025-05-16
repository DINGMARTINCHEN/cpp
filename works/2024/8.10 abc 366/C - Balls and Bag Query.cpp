#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int n;
    cin>>n;
    map<int,int>mp;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int ctrl;
        cin>>ctrl;
        if(ctrl==1)
        {
            int a;
            cin>>a;
            if(mp[a]==0)
            {
                sum++;
                mp[a]=1;
            }
            else
            {
                mp[a]++;
            }
        }
        if(ctrl==2)
        {
            int a;
            cin>>a;
            mp[a]--;
            if(mp[a]==0)
            {
                sum--;
                mp[a]=0;
            }
        }
        if(ctrl==3)
        {
            cout<<sum<<endl;
        }
    }
    return 0;
}