#include<bits/stdc++.h>
using namespace std;
bool compare(int a,int b)
{
    if(a<b)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int n,k;
    cin>>k>>n;
    int a[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,compare);
    for(int i=0;i<n;i++)
    {
        for(int j=1)
    }
}