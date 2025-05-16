#include<bits/stdc++.h>
using namespace std;
bool compare(int x,int y)
{
    if(x<y)
    {
        return false;
    }
    else{
        return true;
    }
}
int main()
{
    int n,m;
    int a[99999];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    for(int i=n;i<m+n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+m+n,compare);
    cout<<"{"<<a[0];
    for(int i=1;i<n+m;i++)
    {
        if(a[i]!=a[i+1])
        {
            cout<<","<<a[i];
        }
    }
    cout<<"}";
    return 0;
}