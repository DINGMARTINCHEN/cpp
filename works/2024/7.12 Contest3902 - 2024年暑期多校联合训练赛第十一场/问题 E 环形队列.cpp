#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string a;
    cin>>a;
    for(int i=m-1;i;i++)
    {
        // cout<<a[i%n]<<" "<<i<<endl;
        if(a[i%n]=='B'&&i!=m-1)
        {
            cout<<i-m+1;
            return 0;
        }
    }
}