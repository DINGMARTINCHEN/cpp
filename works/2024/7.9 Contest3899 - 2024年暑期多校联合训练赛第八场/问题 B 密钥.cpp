#include<bits/stdc++.h>
using namespace std;

// char dic[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y'};

int x_to_ten(string a,int x)
{
    long long ans=0;
    int v=0;
    for(int i=a.size()-1;i>=0;i--)
    {
        int temp=0;
        if(a[i]<='9'&&a[i]>='0')
        {
            temp=int(a[i]-'0');
        }
        else
        {
            temp=int(a[i]-'A'+10);
        }
        ans+=temp*pow(x,v);
        v++;
    }
    return ans;
}

int main()
{
    string a,b;
    cin>>a>>b;
    int maxa=0,maxb=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]<='9'&&a[i]>='0')
        {
            maxa=max((a[i]-'0'),maxa);
        }
        else
        {
            maxa=max(maxa,(a[i]-'A'));
        }
    }
    for(int i=0;i<b.size();i++)
    {
        if(b[i]<='9'&&b[i]>='0')
        {
            maxb=max((b[i]-'0'),maxb);
        }
        else
        {
            maxb=max(maxb,(b[i]-'A'));
        }
    }
    maxa++;
    maxb++;
    int bb[32],aa[32];
    for(int i=maxb;i<=32;i++)
    {
        bb[i]=x_to_ten(b,i);
    }
    for(int i=maxa;i<=32;i++)
    {
        aa[i]=x_to_ten(a,i);
    }
    for(int i=maxa;i<=32;i++)
    {
        for(int j=maxb;j<=32;j++)
        {
            if(aa[i]==bb[j])
            {
                cout<<i<<" "<<j<<endl;
                return 0;
            }
        }
    }
    cout<<"0 0";
}