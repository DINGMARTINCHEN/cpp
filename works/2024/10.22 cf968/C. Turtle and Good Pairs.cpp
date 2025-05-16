#include <bits/stdc++.h>
#define int long long
using namespace std;

void process()
{
    string a;
    cin>>a;
    int sum=0;
    for(int i=0;i<a.size();i++)
    {
        for(int j=i+1;j<a.size();j++)
        {
            if(a[j]!=a[j+1]&&a[j]!=a[i])
            {
                sum++;
            }
        }
    }
    cout<<sum;
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