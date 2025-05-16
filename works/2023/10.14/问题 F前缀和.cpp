#include<bits/stdc++.h>
using namespace std;
long long sum=0;
int main()
{
	int a[99999];
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		sum+=a[i];
		// cout<<sum<<endl;
	}
	int p,q;
	cin>>p>>q;
	for(int i=1;i<p;i++)
	{
		sum-=a[i];
		// cout<<sum<<endl;
	}
	for(int i=q+1;i<=n;i++)
	{
		sum-=a[i];
		// cout<<sum<<endl;
	}
	cout<<sum;
}