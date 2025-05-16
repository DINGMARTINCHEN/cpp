#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<long long,long long>mp;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        mp[b]+=a;
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        mp[b]+=a;
    }
    map<long long,long long>::iterator iter;
    iter=mp.begin();
    if(iter->second!=0)
    cout<<iter->second<<" "<<iter->first<<endl;
    for (iter=mp.begin();iter!=mp.end();iter++)
    {
        if(iter!=mp.begin()&&iter->second!=0)
        {
            cout<<iter->second<<" "<<iter->first<<endl;
// cout << "+" << iter->second << "x^" << iter->first ;
        }
    }      
}

