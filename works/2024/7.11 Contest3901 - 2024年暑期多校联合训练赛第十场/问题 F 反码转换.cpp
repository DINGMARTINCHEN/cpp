#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cin>>a;
    cout<<a;
    if(a=='0')
    {
        while(cin>>a)
        {
            cout<<a;
        }
    }
    else
    {
        while(cin>>a)
        {
            cout<<abs(a-'1');
        }
    }
}