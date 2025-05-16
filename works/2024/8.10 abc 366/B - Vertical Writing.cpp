#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int n;
    cin>>n;
    char a[105][105];
    memset(a,' ',sizeof(a));
    int maxn=0;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        int l=s.size();
        if(l>maxn)
        {
            maxn=l;
        }
        for(int j=0;j<s.size();j++)
        {
            a[i][j]=s[j];
        }
        for(int j=s.size();j<maxn;j++)
        {
            a[i][j]='*';
        }
    }
    for(int j=0;j<maxn;j++)
    {
        for(int i=n-1;i>=0;i--)
        {
            int ccc=a[i][j];
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}