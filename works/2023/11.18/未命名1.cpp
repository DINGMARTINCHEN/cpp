#include <iostream>
using namespace std;
int main()
{
	int a,b,c,sum1,k,n;
	cin>>n;
	cin>>a>>b>>c;
	k=a+b+c;
	for(int i=1;i<n;i++)
	{
		cin>>a>>b>>c;
		if(a+b+c>k)
		{
			sum1++;
		}
		k=a+b+c;
	 } 
	 cout<<sum1;
	 
	 
}
