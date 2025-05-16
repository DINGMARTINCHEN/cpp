#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    double max1,sum1,max2,sum2;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum1+=a[i];
        if(max1<a[i])
        {
            max1=a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        sum2+=b[i];
        if(max2<b[i])
        {
            max2=b[i];
        }
    }
    cout<<max1<<" "<<round(sum1/n)<<endl<<max2<<" "<<round(sum2/n);
}