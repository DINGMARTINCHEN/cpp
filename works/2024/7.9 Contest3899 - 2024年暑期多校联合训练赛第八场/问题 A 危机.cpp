#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    for(int i=0;i<4;i++)
    {
        cin>>a;
    }
    unsigned long long x;//usigned!!!!!!111
    cin>>x>>a;
    unsigned long long seconds=0;
    if(a[0]=='S')
    {
        seconds=x;
    }
    if(a[0]=='M')
    {
        seconds=x*60;
    }
    if(a[0]=='H')
    {
        seconds=x*3600;
    }
    if(a[0]=='D')
    {
        seconds=x*86400;
    }
    cout<<"THE LUNAR CRISIS IN ";
    cout<<seconds;
    if(seconds<=1&&seconds>0)
    {
        cout<<" SECOND";
    }
    else
    {
        cout<<" SECONDS";
    }
}