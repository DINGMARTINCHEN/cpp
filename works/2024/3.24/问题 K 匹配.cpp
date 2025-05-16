#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int max=0;
    for(int j=0;j<n;j++)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(a[(i+j)%n]==b[i])
            {
                sum++;
            }
        }
        if(sum>max)
        {
            max=sum;
        }
    }
    cout<<max;
}