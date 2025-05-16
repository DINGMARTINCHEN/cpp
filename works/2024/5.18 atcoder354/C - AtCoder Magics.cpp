#include<bits/stdc++.h>
using namespace std;
struct cards
{
    int cost;
    int value;
};
int main()
{
    int n;
    cin>>n;
    cards card[n];
    int flag[n];
    for(int i=0;i<n;i++)
    {
        cin>>card[i].value>>card[i].cost;
        flag[i]=1;
        // for(int j=0;j<i;j++)
        // {
        //     if(flag[j]==1&&card[j].cost>card[i].cost&&card[i].value>card[j].value)
        //     {
        //         flag[j]=0;
        //     }
        //     if(flag[i]==1&&card[i].cost>card[j].cost&&card[j].value>card[i].value)
        //     {
        //         flag[i]=0;
        //     }
        // // cout<<"i   "<<i<<" "<<flag[i]<<"   j     "<<j<<" "<<flag[j]<<endl;
        // }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(flag[j]==1&&card[j].cost>card[i].cost&&card[i].value>card[j].value)
            {
                flag[j]=0;
            }
            if(flag[i]==1&&card[i].cost>card[j].cost&&card[j].value>card[i].value)
            {
                flag[i]=0;
            }
        // cout<<"i   "<<i<<" "<<flag[i]<<"   j     "<<j<<" "<<flag[j]<<endl;
        }
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(flag[i]==1)
        {
            sum++;
        }
    }
    cout<<sum<<endl;
    for(int i=0;i<n;i++)
    {
        if(flag[i]==1)
        {
            cout<<i+1<<" ";
        }
        // cout<<"ii"<<i<<" "<<flag[i]<<endl;
    }
}