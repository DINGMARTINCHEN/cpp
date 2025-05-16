#include<bits/stdc++.h>
using namespace std;
struct richer 
{
    string name;
    double possession;
};
bool compare(richer rich1,richer rich2)
{
    if(rich1.possession>rich2.possession)
    {
        return true;
    }
    else if(rich1.possession==rich2.possession&&rich1.name<rich2.name)
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
        cin>>rich[i].name;
        cin>>rich[i].possession;
    }
    sort(rich,rich+n,compare);
    for(int i=0;i<m;i++)
    {
        cout<<rich[i].name<<" "<<rich[i].possession<<endl;
    }
}

