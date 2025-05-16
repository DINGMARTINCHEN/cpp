#include <bits/stdc++.h>
using namespace std;

int a[40000];
int main()
{
	int w,n;
	cin>>w>>n;
	for(int i=1; i<=n; i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	int ans=0;
	int i=1;
	int j=n;
	while(i<=j)
	{
		if(a[i]+a[j]<=w)
		{
			i++;
			j--;
			ans++;
		}
		else
		{
			j--;
			ans++;
		}
	}
	cout<<ans;

	return 0;
}
