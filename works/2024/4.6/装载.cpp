#include<bits/stdc++.h>
using namespace std;
int n,c,a[41],b[41];
int sum,minn;
void f(int k) {
	if(k==n+1) {
		if(sum>minn)
			minn=sum;
		if(minn==c) {
			printf("%d",minn);
			exit(0);
		}
		return;
	}
	for(int i=k; i<=n; i++) {
   if(sum==c)
       cout<<c,exit(0);
   if(b[i]==1)
        continue;
		if(a[i]+sum<=c) {
			b[i]=1;
			sum+=a[i];
			f(k+1);
			b[i]=0;
			sum-=a[i];
		} else
			f(n+1);
	}
}
int main() {
	scanf("%d%d",&n,&c);
	int ab=0;
	for(int i=1; i<=n; i++) {
		scanf("%d",&a[i]);
		ab+=a[i];
		if(a[i]==c) {
			printf("%d",c);
			return 0;
		} 	}
	if(ab<=c) {
		printf("%d",ab);
		return 0;
	}
	sort(a+1,a+1+n);
	f(1);
	printf("%d",minn);
	return 0;
}