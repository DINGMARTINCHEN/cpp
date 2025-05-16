#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    if((a<=c&&b>=c)||(a>=c&&b<=c))
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}