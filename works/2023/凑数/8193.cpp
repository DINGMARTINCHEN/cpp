#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
	string a,b,c,d;
	int max=0;
	getline(cin,a);
	getline(cin,c);
	int flag=0;
	for(int i=0;i<a.size();i++)
	{
		if(a[i]!=' ')
		{
			b+=toupper(a[i]);
		}
	}
	for(int i=0;i<c.size();i++)
	{
		if(c[i]!=' ')
		{
			d+=toupper(c[i]);
		}
	}
	if(b.size()<d.size())
	{
		max=d.size();
	}
	else
	{
		max=b.size();
	}
	for(int i=0;i<max;i++)
	{
		if(int(b[i])!=int(d[i]))
		{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES"; 
	return 0;
}
