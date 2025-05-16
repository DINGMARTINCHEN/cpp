#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

string f()
{
    char z;
    string s1="";
    string s;
    while(cin>>z)
    {
        if(z=='[')
        {
            int t;
            cin>>t;
            s=f();//??????£¿£¿£¿£¿
            while(t--)
            {
                s1+=s;
            }
        }
        else if(z==']')
        {
            return s1;
        }
        else
        {
            s1+=z;
        }
    }
    return s1;
}

int main() 
{
    string a;
    a=f();
    cout<<a;
    return 0;
}