#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
const int N=2e6+50;

struct node{
	int lchild,rchild;
	int data;
}a[N];
int n,ans,x;

void find(int u)
{
	if(a[u].lchild) find(a[u].lchild);
	ans++;
	if(a[u].data==x)
	{
		cout<<ans;
		return ;
	}
	if(a[u].rchild) find(a[u].rchild);
}

int main()
{
	cin>>n>>x;
	for(int i=1;i<=n;i++)
	{
		int d,l,r;
		cin>>d>>l>>r;
		a[i].data=d;
		a[i].lchild=l;
		a[i].rchild=r;
	}
	find(1); 
}