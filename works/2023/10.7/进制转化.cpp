#include <iostream>
using namespace std;
int main()
{
	long long a,b=0,sum=0;
	int n;
	cin>>a>>n;
	for(int i=1;i<=a;i++)
	{
		sum=sum+1;
		if(sum=n)
		{
			b=10+b;
			cout<<b<<endl;
			sum=0;
		}
	}
	cout<<b;
	return 0;
 } 
