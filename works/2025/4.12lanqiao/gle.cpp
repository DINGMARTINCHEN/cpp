#include<bits/stdc++.h>
#define long long
const int N=1005;
using namespace std;

signed main()
{
	int n;
	cin>>n;
	int w[N];
	int maxn=-1,minn=99999;
	map<int,int>fa;// son father
	for(int i=0;i<n;i++)
	{
		cin>>w[i];
		minn=min(w[i],minn);
	}
	for(int i=0;i<n-1;i++)
	{
		int f,s;
		cin>>f>>s;
		fa[s]=f;
	}
	cout<<w[0]-minn;
	return 0;
}
//9
//9 7 3 7 1 6 2 2 7
//1 2
//1 3
//2 4
//2 5
//2 6
//6 7
//6 8
//6 9
