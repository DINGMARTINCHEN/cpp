#include<bits/stdc++.h>
using namespace std;
struct sum
{
    int num;
    int sum;
};
bool cmp(sum a,sum b)
{
    if(a.sum>b.sum)
    {
        return true;
    }
};
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n][k];
    sum sum[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k;j++)
        {
            cin>>a[i][j];
            if(a[i][j]%8==0&&a[i][j]!=0)
            {
                sum[i].sum+=a[i][j];
                sum[i].num=i;
            }
        }
    }
    sort(sum,sum+n,cmp);
    cout<<sum[0].num+1;
}