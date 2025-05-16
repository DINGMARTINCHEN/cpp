#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    string a;
    cin>>a;
    int sum=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            sum++;
        }
    }
    if(sum<=13)//Сд
    {
        for(int i=0;i<a.size();i++)
        {
            if(a[i]>='a'&&a[i]<='z')
            {
                cout<<a[i];
            }
            else
            {
                cout<<tolower(a[i]);
            }
        }
    }
    else
    {
        for(int i=0;i<a.size();i++)
        {
            if(a[i]>='A'&&a[i]<='Z')
            {
                cout<<a[i];
            }
            else
            {
                cout<<toupper(a[i]);
            }
        }
    }
    return 0;
}