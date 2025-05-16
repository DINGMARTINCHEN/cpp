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
        if((a[a.size()-1]-'0')%2==0)
        {
            cout<<"even"<<endl;
        }
        else
        {
            cout<<"odd"<<endl;
        }
    }
    return 0;
}