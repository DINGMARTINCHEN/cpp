#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<m;i++)
    {
        flag=false;
        for(int j=0;j<n;j++)
        {
            if(b[i]==a[j]||(b[i]>a[j]&&b[i]<a[j+1]))
            {
                cout<<a[j]<<endl;
                flag=true;
                break;
            }
        }
        if(flag==false)
        {
            cout<<-1<<endl;
        }
    }
}