#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
	string a;
	cin>>a;
	char b,c;
	cin>>b>>c;
	for(int i=0;a[i];i++)
	{
		if(a[i]==b)
		{
			a[i]=c; 
		}
		cout<<a[i];
	}
	return 0;
 } 
