#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    bool flag[n];
    for(int i=0;i<n;i++)
    {
        cin>>m;
        flag[i]=false;
        for(int j=0;j<m;j++)
        {
            int a;
            cin>>a;
            if(a==1)
            {
                flag[i]=true;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(flag[i]==true)
        {
            cout<<"HARD"<<endl;
        }
        else
        {
            cout<<"EASY"<<endl;
        }
    }
}