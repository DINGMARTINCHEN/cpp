#define yyy cout<<"Yes"<<"\n" 
#define nnn cout<<"No"<<"\n" 
#define x first 
#define y second
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<ll , ll> pii;
typedef pair<int , double> pid;
const int N = 6e5 + 10,inf = 0x3f3f3f3f,mod = 1e9 + 7;

ll n,m,w;
pii a[N];
int dx[N],dy[N];
map <pii , int> mp;

int main()
{
    std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	
	cin>>n>>m>>w;

	for(int i = 1 ; i <= w ; i++)
	{
		cin>>a[i].x>>a[i].y;
		dx[a[i].x]++;
		dy[a[i].y]++;
		mp[{a[i].x , a[i].y}]++;
	}

	vector <int> max_x,max_y;
	int maxn = -1;
	for(int i = 1 ; i <= n ; i++)
	{
		if(maxn < dx[i])
		{
			maxn = dx[i];
			max_x.clear();
			max_x.push_back(i);
		}else if(maxn == dx[i])
		{
			max_x.push_back(i);
		}
	}
	
	maxn = -1;
	for(int i = 1 ; i <= m ; i++)
	{
		if(maxn < dy[i])
		{
			maxn = dy[i];
			max_y.clear();
			max_y.push_back(i);
		}else if(maxn == dy[i])
		{
			max_y.push_back(i);
		}
	}
	
	int ans = 0;
	for(int i = 0 ; i < max_x.size() ; i++)
	{
		for(int j = 0 ; j < max_y.size() ; j++)
		{
			int xx = max_x[i],yy = max_y[j];
			if(mp[{xx , yy}])
			{
				ans = max(ans , dx[xx] + dy[yy] - 1);
			}else
			{
				cout<<dx[xx] + dy[yy];
				return 0;
			}
		}
	}
	
	cout<<ans;
}