#include<bits/stdc++.h>
#define int long long
using namespace std;

void process()
{
	int a,b,c,t;
	cin>>a>>b>>c>>t;
	for(int i=1;i<=t;i++)
	{
		int tmpa=a,tmpb=b,tmpc=c;
		a=floor((tmpb+tmpc)/2);
		b=floor((tmpa+tmpc)/2);
		c=floor((tmpb+tmpa)/2);
	}
	cout<<a<<" "<<b<<" "<<c<<endl;
	return ;
}

signed main()
{
	int n;
	cin>>n;
	while(n--)
	{
		process();
	}
	return 0;
}
