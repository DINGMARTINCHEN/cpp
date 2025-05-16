#include<bits/stdc++.h>
using namespace std;
int n[109],pp[109],t[109];
int turns;
int players[109][109]={0};
int main()
{
    int nn;
    cin>>nn;
    for(int i=0;i<nn;i++)
    {
        cin>>n[i]>>pp[i]>>t[i];
        int pannel[n[i]]={0};
        pannel[0]=1;
        for(int j=0;j<t[i];j++)
        {
            cin>>turns;
            int p=players[i][j%pp[i]+1];
            int z=players[i][j%pp[i]+1];
            while(p<turns)
            {
                if(pannel[p]==0)
                {
                    p++;
                }
                p%=pp[i];
            }
            players[i][j%pp[i]+1]=p;
            pannel[p]++;
            pannel[z]--;
        }
        for(int j=0;j<t[i];j++)
        {
            cout<<players[i][j]<<endl;
        }
    }
}