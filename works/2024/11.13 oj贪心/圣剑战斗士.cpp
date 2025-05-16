#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
const int N=1e5+7;
int n,a[N],b[N],r[N],s=0,sum=0;
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
	s+=a[i];
	r[i]=b[i]-a[i];
	}
	std::sort(r,r+n);
	for(int i=0;i<n/2;i++) sum+=r[i];
	printf("%d",s+sum);
	return 0;
	    
}


