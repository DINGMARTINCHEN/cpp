#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main() 
{
    int a,b,c;
    cin>>a>>b>>c;
    string z;
    cin>>z;
    if(z=="Blue")
    {
        cout<<min(a,b);
    }
    else if(z=="Green")
    {
        cout<<min(a,c);
    }
    else
    {
        cout<<min(b,c);
    }
    return 0;
}
