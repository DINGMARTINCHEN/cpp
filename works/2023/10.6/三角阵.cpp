#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			for(int j=i*i/2-i/2+i;j>=i*i/2-i/2+1;j--)
			{
				cout<<j;
			}
			cout<<endl;
		}
		else
		{
			for(int j=i*i/2-i/2+1;j<=i*i/2-i/2+i;j++)
			{
				cout<<j;
			}
			cout<<endl;
		}
	}
	return 0;
}
