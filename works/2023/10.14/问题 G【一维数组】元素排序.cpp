#include<iostream>
using namespace std;
int main()
{
	int n,a[999];
	n=20;
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
	for(int i=0;i<n;i++)
	{
		if((i+1)%2!=0)
		cout<<a[i]<<" ";
	}
}

