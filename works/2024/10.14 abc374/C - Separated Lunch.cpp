#include<bits/stdc++.h>
#define N 30
#define int long long
using namespace std;
int n,a[N],ans=LLONG_MAX;
signed main(){
	cin>>n;
	for(int i=0;i<n;i++) 
	{
		cin>>a[i];
	}

	for(int i=(1<<n)-1;i>=0;i--)
	{
		int cnta=0,cntb=0;
		for(int j=0;j<n;j++)
		{
			if(i&(1<<j)) //if(i==(1<<j))
			{
				cnta+=a[j];
			}
			else 
			{
				cntb+=a[j];
			}
		}
		ans=min(ans,max(cnta,cntb));
	}
	cout<<ans;
	return 0;
}