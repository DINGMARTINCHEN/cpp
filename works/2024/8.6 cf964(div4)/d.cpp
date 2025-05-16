#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int solve()
{
    string a,b;
    cin>>a>>b;
    int l=0,r=0;
    while(l<a.size())
    {
        if(a[l]==b[r])
        {
            r++;
            l++;
        }
        else if(a[l]=='?')
        {
            // a[l]=b[r];
            // l++;
            // r++;
            if(r!=b.length())
			{
				a[l]=b[r];
				l++;
				r++;
			}
			else
			{
				a[l]='a';
			}
        }
        else
        {
            l++;
        }
    }
    if(r<b.size())
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        cout<<"YES"<<endl<<a<<endl;
        return 0;
    }
}

signed main() 
{
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}