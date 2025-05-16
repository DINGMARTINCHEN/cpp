#include<iostream>
using namespace std;
int main()
{
	int n,a,b,sum=0;
	cin>>n;
	cin>>a;
	for(int i=1;i<n;i++)
	{
		cin>>b;
		if(a!=b)
		{
			sum++;
		}
		a=b;
	}
	cout<<sum;
}

