#include<bits/stdc++.h>
using namespace std;
struct elemt
{
    int start;
    int end;
};
bool compare(elemt a,elemt b)
{
    if(a.end<b.end)
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
    elemt act[n];
    for(int i=0;i<n;i++)
    {
        cin>>act[i].start>>act[i].end;
    }
    sort(act,act+n,compare);
    int sum=1;
    int end=act[0].end;
    for (int j = 1; j < n; j++)
    {
        if (end <= act[j].start)
        {
            sum++;
            end = act[j].end;
        }
    }
    cout<<sum;
}