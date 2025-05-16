#include<iostream>
using namespace std;
const int maxn=3e3+5;
int f[maxn],a[maxn],b[maxn];
int n,ans;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)cin>>b[i];
	for(int i=1;i<=n;i++)
	{
		int maxv=0;
		for(int j=1;j<=n;j++)
		{
			if(a[i]==b[j]) f[j]=max(f[j],maxv+1);
			if(a[i]>b[j])maxv=max(maxv,f[j]);
			ans=max(f[j],ans);
		}
	}
	cout<<ans<<endl;
	return 0;
}