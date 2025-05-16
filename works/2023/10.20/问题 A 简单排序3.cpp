#include <iostream>
using namespace std;
int main()
{
	int n;
	float a[9999],b[9999];
	n=10;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
			}
		}
	}
	for(int i=0;i<n-1;i++)
	{
		b[i]=a[i+1]-a[i];
	}
	double max=0,max1=0;
	int t1,t2;
	for(int i=0;i<n-1;i++)
	{
		if(b[i]>max)
		{
			max=b[i];
			t1=i;
		}
	}
	for(int i=0;i<n-1;i++)
	{
		if(b[i]>max1&&b[i]!=max)
		{
			max1=b[i];
			t2=i;
		}
	}
//	for(int i=0;i<n;i++)
//	{
//		cout<<a[i]<<" ";
//	}
//	cout<<endl;
//	for(int i=0;i<n;i++)
//	{
//		cout<<b[i]<<" ";
//	}
//	cout<<endl;cout<<endl;
//	cout<<max<<" "<<max1<<endl;
//	cout<<t1<<" "<<t2<<endl<<endl;
    if(t1>t2)
	{
		swap(t1,t2);
	}
	double sum1=0,sum2=0,sum3=0;
	for(int i=0;i<=t1;i++)
	{
		sum1=a[i]+sum1;
	}
	for(int i=t1+1;i<=t2;i++)
	{
		sum2=a[i]+sum2;
	}
	for(int i=t2+1;i<n;i++)
	{
		sum3=a[i]+sum3;
	}
	cout<<sum1/(t1+1)<<endl<<sum2/(t2-t1)<<endl<<sum3/(n-t2-1);
	return 0;
}
