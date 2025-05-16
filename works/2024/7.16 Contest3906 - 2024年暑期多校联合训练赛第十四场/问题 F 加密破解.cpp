#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main() 
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        map<char,char>mp;
        string a,b;
        cin>>a>>b;
        bool flag=false;
        bool f=0;
        for(int j=0;j<a.size();j++)
        {
            if(flag==true)
            {
                break;
            }
            for(int p=0;p<a.size();p++)
            {
                if(flag==true)
                {
                    break;
                }
                if((a[j]==a[p]&&b[j]!=b[p])||(b[j]==b[p]&&a[j]!=a[p]))
                {
                    flag=true;//²»ÐÐ
                    break;
                }
            }
        }
        if(flag==false)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}