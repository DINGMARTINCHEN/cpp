#include<bits/stdc++.h>
using namespace std;
void process()
{
    long long n,k;
    cin>>n>>k;
    int a[k];
    for(int i=0;i<k;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    long long sum=0;
    for(int i=0;i<k-1;i++)
    {
        if(a[i]>1)
        {
            sum+=(a[i]-1);
            sum+=(a[i]);
        }
        else
        {
            sum+=1;
        }
    }
    cout<<"---"<<sum<<endl;
}
int main()
{
    int m;
    cin>>m;
    for(int j=0;j<m;j++)
    {
        // process();
        long long n,k;
        cin>>n>>k;
        int a[99999];
        for(int i=0;i<k;i++)
        {
            cin>>a[i];
        }
        sort(a,a+k);
        long long sum=0;
        for(int i=0;i<k-1;i++)
        {
            // cout<<a[i]<<"+++";
            if(a[i]>1)
            {
                sum+=(2*a[i]-1);
            }
            else
            {
                sum+=1;
            }
        }
        cout<<sum<<endl;
    }
}