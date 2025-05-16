#include<bits/stdc++.h>
using namespace std;
const int N=1010;
int a[N],f[N],b[N];
int main()
{	int n=0,x;
	while(cin>>x) a[++n]=x;
	int res=0;
	for(int i=1;i<=n;i++)
	{	f[i]=1;
		for(int j=1;j<i;j++)
		{	if(a[j]>=a[i]) f[i]=max(f[i],f[j]+1);
		 } 
		 if(res<f[i]) res=max(res,f[i]);
	 } 
	 cout<<res<<endl;
	 int cnt=0;
	 for(int i=1;i<=n;i++)
	 {	int k=0;
	 	while(k<cnt&&b[k]<a[i]) k++;
	 	if(k>=cnt) cnt++;
	 	b[k]=a[i];
	 }
	 cout<<cnt<<endl;
	 return 0;
 }

