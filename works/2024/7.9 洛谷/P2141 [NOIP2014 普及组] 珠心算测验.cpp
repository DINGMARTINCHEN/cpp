#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    bool flag[n];
    memset(flag,false,sizeof(flag));
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int sum=0;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<n;j++)
        {
            for(int p=j+1;p<n;p++)
            {
                if(a[p]+a[j]==a[i]&&flag[i]==false)
                {  
                    sum++;
                    flag[i]=true;
                }
            }
        }
    }
    cout<<sum;
}