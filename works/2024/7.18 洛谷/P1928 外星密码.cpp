#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

string read()
{
    string a="";
    char z;
    while(cin>>z)
    {
        if(z=='[')
        {
            int d;
            cin>>d;
            string temp="";
            temp=read();
            while(d--)
            {
                a+=temp;
            }
        }
        else
        {
            if(z==']')
            {
                return a;
            }
            else
            {
                a+=z;
            }
        }
    }
}

int main() 
{
    cout<<read();
    return 0;
}
