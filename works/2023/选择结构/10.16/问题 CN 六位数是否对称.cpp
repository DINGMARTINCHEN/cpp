#include<iostream>
using namespace std;
int main ()
{
	string a;
	int max=0,min=999;
	getline(cin,a);
	for(int i=0;i<3;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(min>a[i])
		{
			min=a[i];
		}
	}
	cout<<max-min;
	return 0;
 } 
