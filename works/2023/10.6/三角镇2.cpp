#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,a;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			for(int j=1;j<=i;j++)
			{
				sum++;
				cout<<sum;
			}
			cout<<endl;
		}
		else
		{
			sum=sum+i;
			a=sum;
			for(int j=1;j<=i;j++)
			{
				cout<<a;
				a--;
			}
			cout<<endl;
		}
	}
	return 0;
 } 
