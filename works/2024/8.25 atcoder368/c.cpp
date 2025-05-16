#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 300005;
ll n,t,a[N],k;
int main(){
	cin>>n;k=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		t+=3*(a[i]/5);
		a[i]%=5;
		while(a[i]>0){
			if(k==1||k==2) a[i]--,k++;
			else a[i]-=3,k=1;
			t++;
		}
	}
	cout<<t<<endl;
	return 0;
}
/*

*/