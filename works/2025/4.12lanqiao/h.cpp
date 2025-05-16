#include<bits/stdc++.h>
const int N=1e5+5;
const int F=1e9+7;
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[N];
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	cout<<sum%F+4;
	return 0;
}
