#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a[n];
    getline(cin,a[0]);
    bool flag[n];
    memset(flag,false,sizeof(flag));
    bool ff=false;
    for(int i=0;i<n;i++)
    {
        getline(cin,a[i]);
        // cout<<a[i]<<endl;
        for(int j=0;j<=9;j++)
        {
            if(a[i].find(char(j+'0'))!=-1)
            {
                flag[i]=true;
                ff=true;
                break;
            }
        }
    }
    if(ff==false)
    {
        cout<<"Not interesting.";
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(flag[i]==true)
            {
                cout<<a[i]<<endl;
            }
        }
    }
}