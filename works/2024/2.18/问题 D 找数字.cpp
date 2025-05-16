#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=2;i<=max(a,b);i++)
    {
        if( a % i == b % i )
        {
            cout << i;
            return 0;
        }
    }
}