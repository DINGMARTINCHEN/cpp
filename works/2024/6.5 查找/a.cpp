#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int N=2e5+50;

int n,m;
vector<int> v;
int ans;


int main()
{
	cin>>m>>n;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		vector<int>::iterator it=find(v.begin(),v.end(),x);
		if(it==v.end())
		{
			if(v.size()==m) v.erase(v.begin());
			ans++;
			v.push_back(x);
			
		}
	}
	cout<<ans;
}