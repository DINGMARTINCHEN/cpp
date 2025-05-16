#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <string>
#define int long long
using namespace std;
int n,m,h,w;
const int M = 1e9;
int f(int x,int y)
{
	int ans=0;
	ans+=(x/4)*(y/2)*8;
	if(x%4==1)//宽为1的绿色
	{
		ans+=3*(y/2);
		if(y%2) ans+=2;//多出来右上角一小块
	}
	if(x%4==2)//宽为2
	{
		ans+=3*y;//每一行的面积都是3，所以不用考虑y的奇偶
	}
	if(x%4==3)//宽为3
	{
		ans+=7*(y/2);
		if(y%2) ans+=3;//多出来右上角一块
	}
	if(y%2) ans+=(x/4)*4;//紫色部分面积
	return ans;
}
int a,b,c,d;
signed main()
{
	
	scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
	a+=M;b+=M;c+=M;d+=M;
	printf("%lld\n",f(c,d)-f(a,d)-f(c,b)+f(a,b));
	return 0;
}
//0 0 5 5
