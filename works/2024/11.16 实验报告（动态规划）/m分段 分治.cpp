#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,m,a[105];

bool check(int k)
{
	int tmp=0,ans=1;
	for(int i=1;i<=n;i++)
	{
		if(tmp+a[i]>k)
		{
			tmp=0;
			ans++;
		}
		tmp+=a[i];
	}
	if(ans<=m)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

signed main() 
{
    cin>>n>>m;
	int l=0,r=0,ans=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		r+=a[i];
		l=max(l,a[i]);
	}
	while(l<=r)
	{
		int mid=(l+r)/2;
		if(check(mid)==1)
		{
			ans=mid;
			r=mid-1;
		}
		else l=mid+1;
	}
	cout<<ans;
	return 0;
}