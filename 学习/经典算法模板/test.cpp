#include<bits/stdc++.h>
using namespace std;

typedef int long long;
typedef long long ll;
const int N=1007;
struct haha{
	int l,r,w;
}a[N];
int b[N];
void build(int p,int l,int r)
{
	a[p]={l,r,b[l]};
	if(l==r)
		return ;
	int mid=(l+r)/2;
	build(2*p,l,mid);
	build(2*p+1,mid+1,r);
	a[p].w=a[2*p].w+a[2*p+1].w;
}
void modify(int t,int x,int y)
{
	if(a[t].l==x&&a[t].r==x)
	{
		a[t].w=y;
		return ;
	}	
	int mid=(a[t].l+a[t].r)/2;
	if(x<=mid)
	{
		modify(2*t,x,y);
		a[t].w=a[2*t].w+a[2*t+1].w;
	}	
	else
	{
		modify(2*t+1,x,y);
		a[t].w=a[2*t].w+a[2*t+1].w;
	}	
	return ;
}
int query(int t,int l,int r)
{
	if(a[t].l==l&&a[t].r==r)
		return a[t].w;
	int mid=(a[t].l+a[t].r)/2;
	if(mid<l)
		return query(2*t+1,l,r);
	else if(mid>=r)
		return query(2*t,l,r);
	else
		return query(2*t,l,mid)+query(2*t+1,mid+1,r);
}
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>b[i];
	build(1,1,n);
	while(m--)
	{
		int op;
		cin>>op;
		if(op==1)
		{
			int x,y;
			cin>>x>>y;
			modify(1,x,b[x]+y);
		}
		else
		{
			int l,r;
			cin>>l>>r;
			cout<<query(1,l,r)<<"\n";
		}
	}
	return 0;
}