#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
	string a;
	getline(cin,a);
	for(int i=0;a[i];i++)
	{
		if(a[i]<='Z'&&a[i]>='A')
		{
			a[i]='Z'+(a[i]-'Z'-5)%26;
		}
		cout<<a[i];
	}
	return 0;
 } 
