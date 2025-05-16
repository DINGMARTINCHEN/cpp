#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	if(m>n)
	{
		swap(m,n);
	}
	cout<<"max="<<n;
	return 0;
 } 
