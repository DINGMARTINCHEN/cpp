#include<iostream>
#include<cmath>
using namespace std;
int main()

{
	int a[104][3],n,min=-32767;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(min<abs(a[i][1]-a[j][1])+abs(a[i][2]-a[j][2]))
			{
				min=abs(a[i][1]-a[j][1])+abs(a[i][2]-a[j][2]);
			}
		}
	}
	cout<<min;
 } 
