#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    cout<<a[0];
    if(a[0]=='0')
    {
        for(int i=1;i<a.size();i++)
        {
            if(a[i]=='0')
            {
                cout<<'0';
            }
            else
            {
                cout<<1;
            }
        }
    }
    else
    {
        for(int i=1;i<a.size();i++)
        {
            if(a[i]=='1')
            {
                cout<<'0';
            }
            else
            {
                cout<<1;
            }
        }
    }
    return 0;
}