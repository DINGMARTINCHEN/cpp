#include <iostream>
#include <cstring>
using namespace  std;
int main()
{
	int n;
	cin>>n;
	char b;
	string a;
	getline(cin,a);
	int c;
	cin>>c>>b;
	a[c-1]=b;
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
	return 0;
}
