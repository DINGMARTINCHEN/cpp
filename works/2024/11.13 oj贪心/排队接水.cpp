#include<bits/stdc++.h>
using namespace std;
const int N=1007;
pair<int,int> a[N];
int main()
{	int n,t=0;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i].first,a[i].second=i;
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++)
	{	cout<<a[i].second<<" ";
		t+=a[i].first*(n-i+1);
	}
	printf("\n%0.2lf",1.0*t/n);
	return 0;
 }

