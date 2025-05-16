#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cout<<n<<" ";
	for (int i=1;i<=n;i--)
	{   if(n==1)
		{
			break;
		}
		if(n%2==0)
		{
			n=n/2;
			cout<<n<<" ";
		}
		else
		{
			n=n*3+1;
			cout<<n<<" ";
		}
	}
}
