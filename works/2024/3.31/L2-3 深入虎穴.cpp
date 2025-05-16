#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool flag[n+10];
    vector<int>g[n];
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        for(int j=0;j<k;j++)
        {
            int a;
            cin>>a;
            g[i].push_back(a);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<g[i].size();j++)
        {
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }
}