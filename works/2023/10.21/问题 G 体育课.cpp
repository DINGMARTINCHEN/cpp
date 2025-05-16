#include<iostream>
using namespace std;
int main()
{
	int n,m,a[9999]={0},b,k=0;
	cin>>m>>n;
	for(int i=1;i<=m+n;i++)
	{
		cin>>b;
		a[b]++;
	}
	for(int i=1;i<=100;i++)
	{
		if(a[i]==2)
		{
			cout<<i<<" ";
			k=1;
		}
	 } 
	 if(k==0)
	 {
	 	cout<<0;
	 }
	 return 0;
 } 
