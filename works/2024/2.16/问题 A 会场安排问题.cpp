#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int start[n],end[n];
    for(int i=0;i<n;i++)
    {
        cin>>start[i]>>end[i];
    }
    sort(start,start+n);
    sort(end,end+n);
    int sum=1,j=0;
    for(int i=1;i<n;i++)
    {
        if(start[i]<end[j])
        {
            sum++;
        }
        else
        {
            j++;
        }
    }
    cout<<sum;
}