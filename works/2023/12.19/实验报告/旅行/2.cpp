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
    for(int i=a[0];i<a[n];i++)//起始地点循环
    {
        for(int j=i;j<a[n];j++)
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
    sort(sum,sum+n,greater<int>());
    cout<<sum[0];
}
/*
14 25

16 8 -7 3 10 -15 -17 6 -12 14 -13 2 9 -5
-17 -15 -13 -12 -7 -5 2 3 6 8 9 10 14 16
*/