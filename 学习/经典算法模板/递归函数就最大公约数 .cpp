#include <bits/stdc++.h>
using namespace std;
int gcd(int af,int ag)
{
	if(ag)
	{
		return gcd(ag,af%ag);
	}
	else return af;
}
int main()
{
	int n;
	cin>>n;
	int x,y;
	for(int i=1;i<=n;i++)
	{
		cin>>x>>y;
		cout<<gcd(x,y)<<'\n';  //�ݹ麯�������Լ�� 
	}
	return 0;
}
