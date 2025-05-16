#include<iostream>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	char a[30];
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(i==k-1)
		cout<<a;
	}
	
	return 0;
}
