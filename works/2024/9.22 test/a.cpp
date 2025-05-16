#include<bits/stdc++.h>
using namespace std;
#define int long long
// [1,2,3,4]
signed main()
{
	char k;
	cin>>k;
	int a[10000],sum=0;
	while(1)
	{
		cin>>a[sum++]>>k;
		if(k==']')
		{
			break;
		}
	}
	for(int i=0;i<sum;i++)
	{
		cout<<a[i]; 
	}
 } 