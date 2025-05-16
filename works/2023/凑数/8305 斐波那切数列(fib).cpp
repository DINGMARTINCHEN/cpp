#include<iostream>
#include <cstring>
using namespace std;
int main()
{
	long long a,q=1;
	cin>>a;
	for(long long i=1;i<=a;i++)
	{
		q=q*i;
	}
	cout<<q;
	return 0;
}
