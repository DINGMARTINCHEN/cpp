#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
const int N=2e6+50;

int n,k;
int a[N];

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	cin>>k;
	while(k--)
	{
		priority_queue<int> q;
		int l,r,x;
		cin>>l>>r>>x;
		for(int i=l;i<=r;i++) q.push(a[i]);
		int pos=0;
		while(pos!=x-1)
		{
			q.pop();
			pos++;
		}
		cout<<q.top()<<'\n';
	}
}