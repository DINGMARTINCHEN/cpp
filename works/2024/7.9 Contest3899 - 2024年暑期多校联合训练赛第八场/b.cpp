#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

const int N=2e6+50;
string s,t;
int mas,mat;
char ss,tt;
int tmps=-1;
int tmpt=-1;

void judge()
{
    for(int i=0;i<s.size();i++)
    {
        if((int)s[i]>=tmps)
        {
            tmps=(int)s[i];
            ss=s[i];
        }
    }
    for(int i=0;i<t.size();i++)
    {
        if((int)t[i]>=tmpt)
        {
            tmpt=(int)t[i];
            tt=t[i];
        }
    }
}

ull to_ten(int u,string tmp)
{
    ull ans=0;
    int cnt=0;
    for(int i=tmp.size()-1;i>=0;i--)
    {
        if(tmp[i]>='0' && tmp[i]<='9') ans+=pow(u,cnt)*(ll)(tmp[i]-'0');
        if(tmp[i]>='A' && tmp[i]<='Z') ans+=pow(u,cnt)*(ll)(tmp[i]-'A'+10);
        cnt++;
    }
    return ans;
}

signed main()
{
    cin>>s>>t;
    judge();
    if(ss>='0' && ss<='9') mas=ss-'0';
    else mas=ss-'A'+10;
    if(tt>='0' && tt<='9') mat=tt-'0';
    else mat=tt-'A'+10;
    for(int i=mas+1;i<=36;i++)
    {
        for(int j=mat+1;j<=36;j++)
        {
            ull a=to_ten(i,s);
            ull b=to_ten(j,t);
            if(a==b)
            {
                cout<<i<<" "<<j;
                return 0;
            }
        }
    }
    cout<<0<<" "<<0;
}