#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        int a[k];
        int maxn=0;
        int minn=99999;
        long long sum=0;
        for(int j=0;j<k;j++)
        {
            cin>>a[j];
            maxn=max(maxn,a[j]);
            minn=min(minn,a[j]);
            sum+=a[j];
        }
        cout<<maxn-minn<<" ";
        long long sum1=0;
        for(int j=0;j<k;j++)
        {
            double kk=k;
            double cc=1.0*sum/(kk*1.0);
            sum1+=pow((a[j]-cc),2);
        }
        double kk=k;
        double answer=sum1/kk;
        cout<<fixed<<setprecision(3)<<answer<<endl;
    }
}