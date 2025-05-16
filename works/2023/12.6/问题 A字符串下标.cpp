#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    char b;
    cin>>a>>b;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=b)
        {
            cout<<a[i];
        }
    }
}