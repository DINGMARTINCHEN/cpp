#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a;
    cin>>a;
    int aa[10];
    memset(aa,0,sizeof(aa));
    for(int i=0;i<n;i++)
    {
        if(a[i]=='L')
        {
            for(int j=0;j<10;j++)
            {
                if(aa[j]!=1)
                {
                    aa[j]=1;
                    break;
                }
            }
        }
        else if(a[i]=='R')
        {
            for(int j=9;j>=0;j--)
            {
                if(aa[j]!=1)
                {
                    aa[j]=1;
                    break;
                }
            }
        }
        else
        {
            aa[int(a[i]-'0')]=0;
        }
        // for(int i=0;i<10;i++)
        // {
        //     cout<<aa[i];
        // }
        // cout<<endl;
    }
    for(int i=0;i<10;i++)
    {
        cout<<aa[i];
    }
}