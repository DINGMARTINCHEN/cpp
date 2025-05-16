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
    int n;
    cin>>n;
    people a[n];
    int record;
    cin>>record;
    if(n<3)
    {
        for(int i=0;i<n;i++)
        {
            cout<<"0 ";
        }
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        cin>>a[i].sum;
        a[i].num=i;
    }
    sort(a,a+n,compare);
    for(int i=0;i<n;i++)
    {
        a[i].score=0;
        if(i<8)
        {a[i].score=8-i;}
        if(a[i].sum==a[i-1].sum&&i>=1)
        {
            a[i].score=a[i-1].score;
        }
    }
    a[0].score=9;
    if(n<8)
    {
        for(int i=0;i<n-1;i++)
        {
            a[i].score=n-i-1;
        }
        a[0].score=n;
        a[n-1].score=0;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
    {
        if(a[i].sum>record)
        {
            cout<<a[i].score*2<<" ";
        }
        else
        {
            cout<<a[i].score<<" ";
        }
    }
}