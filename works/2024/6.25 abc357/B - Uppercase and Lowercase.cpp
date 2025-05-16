#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int uppers=0,lowers=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]<='Z'&&a[i]>='A')
        {
            uppers++;
        }
        else if(a[i]<='z'&&a[i]>='a')
        {
            lowers++;
        }
    }
    if(uppers>lowers)
    {
        for(int i=0;i<a.size();i++)
        {
            if(a[i]<='Z'&&a[i]>='A')
            {
                cout<<a[i];
            }
            else
            {
                cout<<char(int(a[i])+32);
            }
        }
    }
    else
    {
        for(int i=0;i<a.size();i++)
        {
            if(a[i]<='Z'&&a[i]>='A')
            {
                cout<<char(int(a[i])-32);
            }
            else 
            {
                cout<<a[i];
            }
        }
    }
}