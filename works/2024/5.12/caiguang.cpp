#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(c==b&&a!=b&&a!=c&&a!=d&&d!=b)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}