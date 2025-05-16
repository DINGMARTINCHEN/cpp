#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<long long,long long>team;
    map<long long,long long>::iterator it;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        team[b]+=a;
    }
    long long sum=0;
    for(map<long long,long long>::iterator iter = team.begin(); iter != team.end(); ++iter)
    {
        int teamnumber=iter->first,members=iter->second;
        sum+=pow(members,2);
    }
    cout<<sum;
}