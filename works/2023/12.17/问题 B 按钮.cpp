#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[9999],b[9999];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];

    }
    for(int i=0;i<n;i++)
    {
        int sum=0;
        while(a[i]!=b[i])
        {
            if(a[i]>b[i])
            {
                a[i]-=2;
                
                sum++;
            }
            if(a[i]<b[i])
            {
                a[i]+=3;
                sum++;
            }  
        }
        cout<<sum<<endl;
    }
}