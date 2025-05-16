#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n,a[9999],sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",a+i);
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			if(a[j]>a[i])
			{
				swap(a[j],a[i]);
			}
		}
    }
    for(int i=1;i<=n;i++)
	{
		if(i%3!=0)
		{
			sum+=a[i];
		}
	}
	printf("%d",sum);
}

