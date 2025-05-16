#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

void process()
{
    int n;
    cin>>n;
    string a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=n;i>0;i--)
    {
        for(int j=0;j<4;j++)
        {
            if(a[i][j]=='#')
            {
                cout<<j+1<<" ";
                break;
            }
        }
    }
    cout<<endl;
}

signed main() 
{
    int n;
    cin>>n;
    while(n--)
    {
        process();
    }
    return 0;
}