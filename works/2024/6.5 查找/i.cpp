#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
const int N=2e6+50;

string a[N];
int n;
int ans;

int main()
{
	while(cin>>a[++n]);
	n--;
	sort(a+1,a+n+1);
	int ans=a[1].size();
	for(int i=2;i<=n;i++)
	{
		int j=0;
		while(a[i-1][j]==a[i][j] && j<a[i-1].length()) j++;
		ans+=a[i].size()-j;
	}
	cout<<ans+1;
}