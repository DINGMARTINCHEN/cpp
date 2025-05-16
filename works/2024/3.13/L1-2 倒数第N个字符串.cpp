#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    cin>>a>>b;
    for(int i=0;i<a;i++)
    {
        int c=pow(26,a-i-1);
        int d=(b-1)/c%26;
        cout<<char('z'-d);
    }
}