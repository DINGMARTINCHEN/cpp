#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[99999];
    int b[999]={0};
    
    // int b[m+1];
    // for(int i=0;i<=m+1;i++)
    // {
    //     b[i]=0;
    // }
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(b[a[i]]-1==0)
        {
            cout<<"BeiJu"<<endl;
        }
        else
        {
            cout<<b[a[i]]-1<<endl;
        }
    }
}