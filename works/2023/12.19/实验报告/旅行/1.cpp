#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long  n,t;
    cin>>n>>t;
    long long  a[100000],sum[100000]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)//起始地点循环
    {
        for(int j=i;j<n;j++)
        {
            if(a[i]+t>=a[j])
            {
                sum[i]++;
            }
            else
            {
                break;
            }
        }
    }
    sort(sum,sum+n-t,greater<int>());
    // for(int i=0;i<n;i++)
    // {
    //     cout<<sum[i]<<endl;
    // }
    cout<<sum[0];
}/*1 4 5 5 6 7 9 10 11 12
10 2

1 5 9 7 5 4 12 11 10 6 */