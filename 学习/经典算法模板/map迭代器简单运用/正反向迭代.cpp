#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        mp[a]++;
    }
    for(auto iter=mp.begin();iter!=mp.end();iter++)//�������
    {
        cout<<iter->first<<" "<<iter->second<<endl;
    }
    for(auto iter=mp.rbegin();iter!=mp.rend();iter++)//�������
    {
        cout<<iter->first<<" "<<iter->second<<endl;
    }
}