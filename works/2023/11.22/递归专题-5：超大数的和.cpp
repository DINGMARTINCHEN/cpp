#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
	int max1=0;
	max1=max(m,n);
    char a[n],b[m];
	int c[n],d[m],sum[max1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
		c[n-1-i]=int (a[i]-'0');
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
		d[m-1-i]=int (b[i]-'0');
    }
	for(int i=0;i<max1;i++)
    {
        if(c[i]+d[i]>9)
		{
			sum[i+1]++;
			sum[i]+=c[i]+d[i]-10;
		}
		else
		{
			sum[i]+=c[i]+d[i];
		}
    }
	for(int i=max1-1;i>=0;i--)
    {
        cout<<sum[i];
    }
}