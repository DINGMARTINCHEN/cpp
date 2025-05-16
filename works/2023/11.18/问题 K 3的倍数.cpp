#include <iostream>
using namespace std;
int main()
{
	long long int n,i,j,sum;
	cin>>n;
	char a[n][255];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=0;a[i][j];j++)
		{
			sum+=a[i][j]-'0';
		}
		if(sum%3==0)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
}
