#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int n,a[9999],b[9999];
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+1+n);
	for(int i=0;i<=n;i++){
		cout<<a[i]<<" ";
	}
 } 
