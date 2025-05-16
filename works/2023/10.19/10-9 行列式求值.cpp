#include<iostream>
using namespace std;
int main()
{
	int n,a[104][104];
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin<<a[i][j];
		}
	}
	int plus=1;
	for(int i=1;i<=n;i++)
	{
		int t=i;
		for(int j=1;j<=n;j++)
	    {
		    plus=a[j][t]*plus;
	    }
	    t++;
	} 
	
 } 
