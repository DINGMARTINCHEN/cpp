#include<bits/stdc++.h>
const long long N=1e9+7;
using namespace std;
int main()
{
	long long sum=1;
	for(int i=45;i>=1;i--)
	{
		sum*=i;
		sum%=N;
	}
	cout<<sum;
}
