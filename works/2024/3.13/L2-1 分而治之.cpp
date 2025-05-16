#include<bits/stdc++.h>
using namespace std;
long long a[10004],b[10004];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>a[i]>>b[i];
    }
    int c=0;
    cin>>c;
    for(int i=0;i<c;i++)
    {
        int p;
        cin>>p;
        for(int v=0;v<p;v++)
        {
            int o;
            cin>>o;
            a[o]=0;
            b[o]=0;
        }
        bool flag=true;
        for(int v=0;v<m;v++)
        {
            if(a[v]!=0&&b[v]!=0)
            {
                flag=false;
                break;
            }
        }
        if(flag==true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}