#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for (int i=a;i<n;i++)

int n,m;
int main() {
	scanf("%d%d",&n,&m);
	int r=0;
	rep(i,0,n) {
		int x;
		scanf("%d",&x);
		if (m>=x) {
			m-=x;
			r++;
		} else break;
	}
	printf("%d\n",r);
}