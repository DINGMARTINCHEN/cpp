#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    string b[m];
    bool flag[m];
    memset(flag,false,sizeof(flag));
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        for(int j=0;j<n;j++)
        {
            if(a[j]==b[i])
            {
                flag[i]=true;
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        if(flag[i]==true)
        {
            cout<<"ZengYu"<<endl;
        }
        else
        {
            cout<<"JieDai"<<endl;
        }
    }
}