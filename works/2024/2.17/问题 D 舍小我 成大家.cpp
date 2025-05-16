#include<bits/stdc++.h>
using namespace std;
bool compare(int a,int b)
{
    if(a>b)
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
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    int sum=0;
    sort(a,a+n,compare);
    // for(int i=0;i<n;i++)
    // {

    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=50)
        {
            sum++;
        }
        else
        { 
            break;
        }
    }
    cout<<sum<<endl<<a[k-1];
}
