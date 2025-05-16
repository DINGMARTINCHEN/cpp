#include<bits/stdc++.h>
using namespace std;
int a[999999];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        int z=a[i]%12;
        if(z<=5&&z>0)
        {
            cout<<0<<" ";
        }
        if(z<=9&&z>5)
        {
            cout<<1<<" ";
        }
        if((z>9&&z<=11)||z==0)
        {
            cout<<2<<" ";
        }
    }
}