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
	if(x%4==1)//��Ϊ1����ɫ
	{
		ans+=3*(y/2);
		if(y%2) ans+=2;//��������Ͻ�һС��
	}
	if(x%4==2)//��Ϊ2
	{
		ans+=3*y;//ÿһ�е��������3�����Բ��ÿ���y����ż
	}
	if(x%4==3)//��Ϊ3
	{
		ans+=7*(y/2);
		if(y%2) ans+=3;//��������Ͻ�һ��
	}
	if(y%2) ans+=(x/4)*4;//��ɫ�������
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
