#include <bits/stdc++.h>
using namespace std;
int q[105],r[105];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
    {
        cin>>q[i]>>r[i];
    }
		
	int p;
	cin>>p;
	while(p--){
		int t,d;
		cin>>t>>d;
		int ans=r[t]-d%q[t]+d;
		if(r[t]-d%q[t]<0)
        {
            ans+=q[t];
        }
			
		cout<<ans<<endl;
	}
	return 0;
}