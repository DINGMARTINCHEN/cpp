#include "bits/stdc++.h"
using namespace std;
int b,p,k,a;
int f(int p)
{
	if(p==0)
	{
		return 1;
	}
	int tmp=f(p/2)%k;
	tmp=(tmp*tmp)%k;
	if(p%2==1)
	{
		tmp=(tmp*b)%k;
	}
	return tmp;
}
int main()
{
	cin>>b>>p>>k;
	int temp=b;
	b%=k;
	printf("%d^%d mod %d=%d\n",temp,p,k,f(p));
	return 0;
}