#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(b<=59)
    {
        a+=2;
    }
    if(b>=60&&b<=79)
    {
        a+=4;
    }
    if(b>=80&&b<=89)
    {
        a+=5;
    }
    if(b>=90&&b<=100)
    {
        a+=6;
    }
    cout<<a;
}