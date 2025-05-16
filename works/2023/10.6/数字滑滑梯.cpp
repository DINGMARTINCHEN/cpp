#include <iostream>
using namespace std;
int main()
{
	long long a,b,c;
	cin>>a;
	c=1;
	b=1; 
	for (int i=a/10;i>0;i=i/10)
	{
		b=b*10;
		c++;
	}
	for(int j=1;j<=c;j++)
	{
		cout<<a<<endl;
		a=a%b*10+a/b;
	}
	return 0;
}
