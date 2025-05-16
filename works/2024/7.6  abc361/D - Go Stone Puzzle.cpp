#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string aa,bb;
    cin>>aa>>bb;
    if(aa==bb)
    {
        cout<<0;
        return 0;
    }
    int a[n],b[n];
    int sumb=0,suma=0;
    for(int i=0;i<n;i++)
    {
        if(aa[i]=='W')
        {
            a[i]=1;
            suma++;
        }
        else
        {
            a[i]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(bb[i]=='W')
        {
            b[i]=1;
            sumb++;
        }
        else
        {
            b[i]=0;
        }
    }
    if(suma!=sumb)
    {
        cout<<-1;
        return 0;
    }

}