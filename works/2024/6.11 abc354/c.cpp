#include<bits/stdc++.h>
using namespace std;
struct cards 
{
    int value;
    int cost;
    int num;
    bool flag;
};
// bool cmp(cards a,cards b)
// {
//     return a.num<b.num;
// }
bool compare(cards a,cards b)
{
    return a.value<b.value;
}
int main()
{
    int n;
    cin>>n;
    bool flags[n];
    memset(flags,true,sizeof(flags));
    cards card[n];
    for(int i=0;i<n;i++)
    {
        cin>>card[i].value>>card[i].cost;
        card[i].num=i+1;
        card[i].flag=true;
    }
    sort(card,card+n,compare);
    int sum=0;
    int minn=card[n-1].cost;
    for(int i=n-1;i>=0;i--)
    {
        if(card[i].cost>minn)
        {
            card[i].flag=false;
            flags[card[i].num-1]=false;
        }
        else
        {
            minn=card[i].cost;
            sum++;
        }
    }
    // sort(card,card+n,cmp);
    cout<<sum<<endl;
    for(int i=0;i<n;i++)
    {
        if(flags[i]==true)
        {
            cout<<i+1<<" ";
        }
    }
}