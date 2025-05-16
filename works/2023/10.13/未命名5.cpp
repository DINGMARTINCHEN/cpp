#include<iostream>
using namespace std;
int main()
{
	long long a[9999999]={0},i=0;
	for(i=0;i<999999;i++)
	{
		cin>>a[i];
		if(a[i]=='/n')
		{
			break;
		}
	}
	for(int j=i-1;j>=0;j--)
	{
		cout<<a[i]<<endl;
	}
	return 0;
 }
