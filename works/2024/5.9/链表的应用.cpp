#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int>mp;
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
    map<int, int>::iterator iter;
    for (iter = mp.begin(); iter != mp.end(); iter++) 
    {
        if(iter->second!=0)
        cout << iter->second <<" "<< iter->first<< endl;
    }
}