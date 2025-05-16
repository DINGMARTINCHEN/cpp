#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main() 
{
    int a[100000];
    string s,t;
    cin>>s>>t;
    reverse(s.begin(),s.end());
    reverse(t.begin(),t.end());
    for(int i=0;i<max(t.size(),s.size());i++)
    {
        a[i]=(t[i]-'0'-'0'+s[i]+a[i])%10;
        a[i+1]=(t[i]-'0'-'0'+s[i]+a[i])/10;
    }
    for(int i=max(t.size(),s.size())-1;i>=0;i--)
    {
        cout<<a[i];
    }
    return 0;
}
