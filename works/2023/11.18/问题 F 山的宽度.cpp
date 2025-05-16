#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int w=1,ma=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i-1;j>=0&&a[j+1]>=a[j];j--)
		{
			w++;
		}
		for(int j=i+1;j<n&&a[j-1]>=a[j];j++)
		{
			w++;
		}
		if(w>ma)
		{
			ma=w;
		}
		w=1;
	}
	cout<<ma;
	return 0;
}
