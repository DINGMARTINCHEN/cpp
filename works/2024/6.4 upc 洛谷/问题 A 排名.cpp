#include<bits/stdc++.h>
using namespace std;
struct people 
{
    long long score;
    long long num;
    long long rate;
};
bool compare (people a,people b)
{
    return a.score>b.score;
}
bool cmp(people a,people b)
{
    return a.num<b.num;
}
int main()
{
    long long n;
    cin>>n;
    people a[n];
    memset(a,0,sizeof(a));
    for(long long i=0;i<n;i++)
    {
        for(long long j=0;j<4;j++)
        {
            long long sum;
            cin>>sum;
            a[i].num=i;
            a[i].score+=sum;
        }
    }
    sort(a,a+n,compare);
    for(long long i=0;i<n;i++)
    {
        a[i].rate=i+1;
    }
    sort(a,a+n,cmp);
    for(long long i=0;i<n;i++)
    {
        cout<<a[i].rate<<endl;
    }
}