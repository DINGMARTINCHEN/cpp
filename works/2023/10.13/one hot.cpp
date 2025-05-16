#include<iostream>
#include "bitset"
#include <cstring>
#include <string>
using namespace std;
int main()
{
	string a;
	int x=0;
	getline(cin,a);
	for(int i=0;i<a.size();i++)
	{
		switch (a[i]) 
	    {
		case 0:
			cout << "0000000001";
			break;
		case 1:
			cout << "0000000010";
			break;
		case 2:
			cout << "0000000100";
			break;
		case 3:
			cout << "0000001000";
			break;
		case 4:
			cout << "0000010000";
			break;
		case 5:
			cout << "0000100000";
			break;
		case 6:
			cout << "0001000000";
			break;
		case 7:
			cout << "0010000000";
			break;
		case 8:
			cout << "0100000000";
			break;
		case 9:
			cout << "1000000000";
			break;
        }
        if(i!=a.size())
        {
        	cout<<",";
		}
	}
	return 0;
}
