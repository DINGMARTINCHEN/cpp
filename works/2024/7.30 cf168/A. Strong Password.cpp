#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string a;
        cin>>a;
        if(a.size()==1)
        {
            if(a[0]=='z')
            {
                cout<<'a'<<a[0];
            }
            else
            {
                cout<<char(a[0]+1)<<a[0];
            }
        }
        else
        {
            int flag=0;
            for(int j=0;j<a.size()-1;j++)
            {
                cout<<a[j];
                if(a[j]==a[j+1]&&flag==0)
                {
                    flag++;
                    if(a[j]=='z')
                    {
                        cout<<'a';
                    }
                    else
                    {
                        cout<<char(a[j]+1);
                    }
                }
            }
            cout<<a[a.size()-1];
            if(flag==0)
            {
                if(a[a.size()-1]=='z')
                {
                    cout<<'a';
                }
                else
                {
                    cout<<char(a[a.size()-1]+1);
                }
            }
        }
        
        cout<<endl;
    }
    return 0;
}