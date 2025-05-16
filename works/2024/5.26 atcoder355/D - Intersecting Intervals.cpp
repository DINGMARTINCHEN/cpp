#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
int main(){
	ll n;
	cin>>n;
	vector <int> l(n), r(n);
	for(int i=0; i<n; ++i){
		cin>>l[i]>>r[i];
	}
	sort(l.begin(),l.end());
	sort(r.begin(),r.end());
	ll ans=n*(n-1)/2;
	for(int i=0,j=0;i<n;++i){
		while(j<n&&r[j]<l[i])
			j++;
		ans-=j;
	}
	cout<<ans<<endl;
	return 0;
}