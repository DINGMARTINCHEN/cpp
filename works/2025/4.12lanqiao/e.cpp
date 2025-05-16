#include<bits/stdc++.h>
#define int long long
const int N=1e5+5;
using namespace std;

bool cmp(int a,int b)
{
	return a<b;
}

signed main()
{
	int n;
	cin>>n;
	int m;
	cin>>m;
	int a[N];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n,cmp);
	int l=0;
	for(int i=0;i<m-1;i++)
	{
		l+=abs(a[i]*a[i]-a[i+1]*a[i+1]);
	}
	cout<<l;
	return 0;
}
