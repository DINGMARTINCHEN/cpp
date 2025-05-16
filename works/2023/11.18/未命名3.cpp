#include <iostream>
using namespace std;

int main()
{
	long long int n,i;
	cin>>n;
	for(i=8;i<=n;i+=10)
	{
		printf("%d %d %d\n",i,2*i,4*i);
	}
}
