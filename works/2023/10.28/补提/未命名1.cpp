#include<iostream>
using namespace std;
int main()
{
	int n,g[9999],b,a,sum;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		 g[i]=a-b;
		 sum+=a;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(g[i]<g[j])
			{
				swap(g[i],g[j]);
			}
		}
	}
	for(int j=0;j<n;j++)
	{
			cout<<g[j]<<" ";
	}
 } 
