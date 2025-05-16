#include <iostream>
using namespace std;

int main()
{
	long long int n,max1=0,max2=0,a;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(max1<a)
		{
			max2=max1;
			max1=a;
		} 
		else if(max2<a)
		    max2=a;
	}
	cout<<max1<<" "<<max2;
}
