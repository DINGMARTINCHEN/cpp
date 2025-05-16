#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
	string a,b,c;
	getline(cin,a);
	getline(cin,b);
	getline(cin,c);
	if(int(a[0]-b[0])!=int(a[1]-b[1]))
	{
		cout<<"Failed";
		return 0;
	}
	for(int i=0;c[i];i++)
	{
		c[i]+=char(int(a[0]-b[0]));
		cout<<c[i];
	}
	return 0;
 } 
