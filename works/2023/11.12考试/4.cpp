#include<bits/stdc++.h>
using namespace std;
int main(){
	long long num,b,n=1,sum=1;
	cin>>num;
	b=num;
	for (int i=0;num;i++)
	{
		n*=10;
		sum++;
		num/=10;
	}
	sum--;
	n/=10;
	for (int i=1; i<=sum; ++i)
	{
		cout<<b<<endl;
		b=b%n*10+b/n;
	}
    return 0;
}
