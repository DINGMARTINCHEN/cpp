#include<bits/stdc++.h>
using namespace std;
struct people
{
    int num;
    int score;
    int sum;
};
bool compare(people a,people b)
{
    return a.sum>b.sum;
}
bool cmp(people a,people b)
{
    return a.num<b.num;
}
int main()
{
    people peo[3];
    for(int i=0;i<3;i++)
    {
        cin>>peo[i].sum;
        peo[i].num=i;
    }
    int r;
    cin>>r;
    sort(peo,peo+3,compare);
    if(peo[2].sum==peo[0].sum&&peo[2].sum==peo[1].sum)
    {
        peo[2].score=4;
        peo[1].score=4;
        peo[0].score=4;
    }
    else if(peo[2].sum==peo[1].sum)
    {
        peo[2].score=2;
        peo[1].score=2;
        peo[0].score=4;
    }
    else if(peo[0].sum==peo[1].sum)
    {
        peo[0].score=4;
        peo[1].score=4;
        peo[2].score=2;
    }
    else
    {
        peo[2].score=1;
        peo[1].score=2;
        peo[0].score=4;
    }
    // for(int i=0;i<3;i++)
    // {
    //     cout<<peo[i].score<<endl;
    // }
    sort(peo,peo+3,cmp);
    for(int i=0;i<3;i++)
    {
        if(peo[i].sum>r)
        {
            cout<<peo[i].score*2<<" ";
        }
        else
        {
            cout<<peo[i].score<<" ";
        }
        // cout<<peo[i].num<<" "<<peo[i].sum<<" "<<peo[i].score<<endl;
    }
}