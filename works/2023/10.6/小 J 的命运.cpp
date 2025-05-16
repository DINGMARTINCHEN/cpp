#include <iostream>
using namespace std;
int main()
{
	int n,a=0,b=0,c=0,d=0;
	cin>>n;
	cin>>a;
	for(int i=1;i<=n-1;i++)
	{
		cin>>b;
		if(b>a)
		{
			c++;
		} 
		if(b<a)
		{
			d++;
		}
		a=b;
	}
	cout<<c<<" "<<d;
	return 0;
}
