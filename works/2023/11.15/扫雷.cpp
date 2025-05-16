#include<iostream>
using namespace std;
int main()

{
	char a[104][104];
	int n,m,b[104][104]={0};
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]=='.')
			{
				if(a[i][j+1]=='*')
				{
					b[i][j]++;
				}
				if(a[i][j-1]=='*')
				{
					b[i][j]++;
				}
				if(a[i+1][j-1]=='*')
				{
					b[i][j]++;
				}
				if(a[i+1][j]=='*')
				{
					b[i][j]++;
				}
				if(a[i+1][j+1]=='*')
				{
					b[i][j]++;
				}
				if(a[i-1][j+1]=='*')
				{
					b[i][j]++;
				}
				if(a[i-1][j-1]=='*')
				{
					b[i][j]++;
				}
				if(a[i-1][j]=='*')
				{
					b[i][j]++;
				}
			}
		}
	 } 
	 	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]=='*')
			{
				cout<<'*';
			}
			else
			{
				cout<<b[i][j];
			}
		}
		cout<<endl;
	 } 
 } 
