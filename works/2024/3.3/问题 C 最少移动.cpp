#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[104][104];
    int sum[n];
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        for(int j=0;j<t;j++)
        {
            cin>>a[i][j];
            sum[i]+=a[i][j];
        }
        if(sum[i]%t==0)
        {
            sum[i]=0;
            for(int j=0;j<t;j++)
            {
                sum[i]+=abs(a[i][j]-a[i][j-1]);
            }
            double z=sum[i];
            sum[i]=ceil(z/2)-1;
        }
        else

        {
            sum[i]=-1;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<sum[i]<<endl;
    }
}