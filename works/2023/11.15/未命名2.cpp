#include<iostream>
using namespace std;
int main()

{
	int a[104][104],n,m,sum=0;
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
			if(i==1||i==m||j==1||j==n)
			{
				sum+=a[i][j];
			}
		}
	}
	cout<<sum;
 } 
