#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	int a[102];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	int sum=0;
	for(int i=0;i<m;i++)
	{
		sum+=abs(a[n-i-1]-a[i]);
	}
	cout<<sum;
	return 0;
}
