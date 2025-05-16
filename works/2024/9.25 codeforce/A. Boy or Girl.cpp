#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    string a;
    cin>>a;
    int sum=0, flag[50];
    memset(flag,0,sizeof(flag));
    for(int i=0;i<a.size();i++)
    {
        if(flag[a[i]-'a']==0)
        {
            sum++;
            flag[a[i]-'a']++;
        }
    }
    if(sum%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
    return 0;
}