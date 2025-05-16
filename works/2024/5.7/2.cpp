#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;;
    cin>>n;
    int a[n]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int sum=0;
    for(int i=0;i<n+1;i++)
    {
        if(a[i]==a[i+1])
        {
            continue;
        }
        else
        {
            sum++;
        }
    }
    cout<<sum<<endl;
    for(int i=0;i<n+1;i++)
    {
        if(a[i]==a[i+1])
        {
            continue;
        }
        else
        {
            cout<<a[i];
            if(i<n-1)
            {
                cout<<" ";
            }
        }
    }
}