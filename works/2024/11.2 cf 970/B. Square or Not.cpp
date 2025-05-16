#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N=2e5+5;

void dsc()
{
    int n;
    cin>>n;
    char a[N];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int s=sqrt(n);
    if(s*s!=n)
    {
        cout<<"No"<<endl;
        return ;
    }
    for(int i=0;i<n;i++)
    {
        if(i+1<=s||i%s==0||i%s==s -1||i/s ==s -1)
        {
            if(a[i]=='0')
            {
                cout<<"No"<<endl;
                return ;
            }
        }
        else if(a[i]=='1')
        {
            cout<<"No"<<endl;
            return ;
        }
    }
    cout<<"Yes"<<endl;
}

signed main() 
{
    int n;
    cin>>n;
    while(n--)
    {
        dsc();
    }
    return 0;
}