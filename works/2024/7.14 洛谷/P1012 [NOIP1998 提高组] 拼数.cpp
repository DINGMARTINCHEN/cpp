#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

bool cmp(string a,string b)
{
    return a+b>b+a;
}

int main() 
{
    string a[22];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
}