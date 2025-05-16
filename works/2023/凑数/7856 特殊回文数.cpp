#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=9;i++)
	{
		for(int j=0;j<=9;j++)
		{
			for(int z=0;z<=9;z++)
			{
				if(2*i+2*j+2*z==n)
				{
					cout<<i<<j<<z<<z<<j<<i<<endl;
				}
				if(2*i+2*j+z==n)
				{
					cout<<i<<j<<z<<j<<i<<endl;
				}
			}
		}
	 } 
}
