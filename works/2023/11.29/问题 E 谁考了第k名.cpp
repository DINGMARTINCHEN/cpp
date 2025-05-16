#include<bits/stdc++.h>
using namespace std;
struct richer 
{
    string num;
    double possession;
};
bool compare(richer rich1,richer rich2)
{
    if(rich1.possession>rich2.possession)
    {
        return true;
    }
    else if(rich1.possession==rich2.possession&&rich1.num<rich2.num)
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
    int n,m;
    cin>>n>>m;
    richer rich[999];
    for(int i=0;i<n;i++)
    {
        cin>>rich[i].num;
        cin>>rich[i].possession;
    }
    sort(rich,rich+n,compare);
    // for(int i=0;i<n;i++)
    // {
    //     cout<<rich[i].num<<" "<<i<<endl;
    // }
    cout<<rich[m-1].num<<" "<<rich[m-1].possession;
}