#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	string a;
	getline(cin,a);
	for(int i=a.size();i>=0;i--)
	{
		cout<<int (a[i]-'0');
	}
	return 0;
}
