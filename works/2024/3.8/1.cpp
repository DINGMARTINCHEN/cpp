#include <bits/stdc++.h>
using namespace std;
int maxn[505], u[2005], v[2005], w[2005];
int main() {
    int n, m;
    cin>>n>>m;
    for (int i=0; i<n;i++) 
	{
    	cin>>u[i]>>w[i]>>v[i];
    	for(int k=1; k<=u[i];k++) 
		{
            for(int j=m; j>=k*w[i];j--)
			{
				maxn[j]=max(maxn[j],maxn[j-w[i]]+v[i]);
			}
        }
    }
    cout<<maxn[m]<<endl;
    return 0;
}