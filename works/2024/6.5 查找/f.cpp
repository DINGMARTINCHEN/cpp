#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
const int N=2e6+50;

int n,m;
int h[N],a[N];

void find(int x)
{
	int l,r;
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			l=i;
			break;
		}
	}
	for(int i=n-1;i>=0;i--)
	{
		if(a[i]==x)
		{
			r=i;
			break;
		}
	}
	cout<<l<<' '<<r<<'\n';
}

int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++){ cin>>a[i];  h[a[i]]++;}
	while(m--)
	{
		int x;
		cin>>x;
		if(!h[x])
		{
			cout<<"-1 -1\n";
			continue;
		}
		find(x);
	}
}