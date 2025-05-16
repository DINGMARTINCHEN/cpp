#include<bits/stdc++.h>
#define int unsigned long long
using namespace std;

int fun(int n,int m) 
{
	if(m==1||m==n)
    {
        return 1;
    }
	else
    {
        return fun(n-1,m-1)+m*fun(n-1,m);
    }
}

signed main() {
	int n;
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++)
    {
        sum=sum+fun(n,i);
    }
	cout<<sum;
	return 0;
}
