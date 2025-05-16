#include <iostream>
using namespace std;
int main()
{
	int n,a[99999];
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int k,b;//上一个最大a【k】=b 
	a[k]=a[1]; 
	for(int i=2;i<=n;i++)
	{
		if(a[i]>a[k])
		{
			a[i]=b;
			k=i;
		}
	}
}
