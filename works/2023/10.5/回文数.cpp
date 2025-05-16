#include <iostream>
using namespace std;
int main(){
	long long a,b,c,d,e,f,n;
	cin>>n;
	for(a=1;a<=9;a++)
	{
		for(b=0;b<=9;b++)
		{
			for(c=0;c<=9;c++)
			{
				for(d=0;d<=9;d++)
				{
					for(e=1;e<=9;e++)
					{
						if(a==e&&b==d&&2*(a+b)+c==n)
						{
							cout<<a<<b<<c<<d<<e<<" ";
						}
					}
				}
			}
		}
	}
	for(a=1;a<=9;a++)
	{
		for(b=0;b<=9;b++)
		{
			for(c=0;c<=9;c++)
			{
				for(d=0;d<=9;d++)
				{
					for(e=0;e<=9;e++)
					{
						for(f=1;f<=9;f++)
						{
							if(a==f&&b==e&&c==d&&2*(a+b+c)==n)
							{
								cout<<a<<b<<c<<d<<e<<f<<" ";
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
