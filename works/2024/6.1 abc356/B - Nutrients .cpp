#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int target[m];
    int ate[n][m];
    memset(ate,0,sizeof(ate));
    for(int i=0;i<m;i++)
    {
        cin>>target[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>ate[i][j];
            if(i!=0)
            {                
                ate[0][j]+=ate[i][j];
            }
        }
    }
    // for(int i=0;i<m;i++)
    // {
    //     cout<<ate[0][i]<<" ";
    // }
    for(int i=0;i<m;i++)
    {
        if(ate[0][i]<target[i])
        {
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
}