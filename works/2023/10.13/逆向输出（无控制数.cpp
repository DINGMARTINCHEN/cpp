#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int a[9999],i=0;
	while(cin>>a[i])
	{
		i++;
	}
	for(int j=i-1;j>=0;j--)
	{
		cout<<a[j]<<" ";
	}
	return 0;
}
