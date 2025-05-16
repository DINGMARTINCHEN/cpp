#include<bits/stdc++.h>
using namespace std;
struct cave
{
    int num;
    int people;
};
bool compare(cave a,cave b)
{
    if(a.people>b.people)
    {
        return true;
    }
    else if(a.people==b.people&&a.num<b.num)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cin>>n;
    cave a[1000];
    for(int i=0;i<1000;i++)
    {
        a[i].num=0;
        a[i].people=0;
    }
    for(int i=0;i<n;i++)
    {
        int j;
        cin>>j;
        a[j].num=j;
        a[j].people++;
    }
    sort(a,a+1000,compare);
    cout<<a[0].num;
    for(int i=1;i<n;i++)
    {
        if(a[i].people==0)
        {
            return 0;
        }
        else
        {
            cout<<"->"<<a[i].num;
        }
    }
}