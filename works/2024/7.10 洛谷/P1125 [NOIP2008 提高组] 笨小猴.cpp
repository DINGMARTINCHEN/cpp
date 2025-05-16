#include<bits/stdc++.h>
using namespace std;

bool judge(int n)
{
    if(n<2)
    {
        return false;
    }
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string a;
    cin>>a;
    int s[26];
    memset(s,0,sizeof(s));
    for(int i=0;i<a.size();i++)
    {
        s[a[i]-'a']++;
    }
    int maxn=0,minn=99999;
    for(int i=0;i<26;i++)
    {
        maxn=max(maxn,s[i]);
        if(s[i]!=0)
        minn=min(minn,s[i]);
    }
    // cout<<maxn<<"---"<<minn<<endl;
    // if(minn==0)
    // {
    //     minn++;
    // }
    if(judge(maxn-minn)==true)
    {
        cout<<"Lucky Word"<<endl<<maxn-minn;
    }
    else
    {
        cout<<"No Answer"<<endl<<0;
    }
}