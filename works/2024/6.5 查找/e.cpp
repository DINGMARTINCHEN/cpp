#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
const int N=2e6+50;

int n;
int a[N];
int x;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	cin>>x;
	int l=1,r=n;
	while(l+1<r)
	{
		int mid=l+r>>1;
		if(a[mid]>=x) r=mid;
		if(a[mid]<x) l=mid;
	}
	if(a[l]==x) cout<<l;
	else if(a[r]==x) cout<<r;
	else cout<<-1;
}