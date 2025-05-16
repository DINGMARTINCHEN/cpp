//例题 ST表求的区间最大值-最小值
//https://atcoder.jp/contests/abc352/tasks/abc352_d
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5+10;
int b[N];
int ST1[N][25];//区间最大值 
int ST2[N][25];//区间最小值 
int n;
void init_ST()
{
    for(int i = 1;i<=n;i++)
        ST2[i][0]=ST1[i][0]=b[i];
    int k=log2(n);
    for(int j=1;j<=k;j++)
    {
    	for(int i=1;i<=n-(1<<j)+1;i++)
        {
            ST1[i][j]=max(ST1[i][j-1],ST1[i+(1<<(j-1))][j-1]);
            ST2[i][j]=min(ST2[i][j-1],ST2[i+(1<<(j-1))][j-1]);
        }
	}
}
int ST_query(int l,int r)
{
    int k = log2(r-l+1);
    return max(ST1[l][k],ST1[r-(1<<k)+1][k]) - min(ST2[l][k],ST2[r-(1<<k)+1][k]);
}
void work()
{
    int k;
    cin>>n>>k;
    vector<pair<int,int> >a(n + 1);
    for(int i = 1;i <= n;i++)
    {
        cin>>a[i].first;
        a[i].second = i;
    }
    sort(++a.begin(),a.end());
    for(int i = 1;i <= n;i++)
    {

       b[i] = a[i].second;
    }
    init_ST();
    int ans = 2e9;
    for(int i = k;i <= n;i++)
    {
        ans = min(ans,ST_query(i - k + 1,i));
    }
    cout<<ans<<'\n';
}
signed main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int _=1;
    while(_--)
    {
    	work();
	}
    return 0;
}

//洛谷模板题
//https://www.luogu.com.cn/problem/P3865

/*
#include <bits/stdc++.h>
#define Fast ios::sync_with_stdio(false);cin.tie(0),cout.tie(0)
using namespace std;
const int N=2e5+50;
int stmax[N][25];
int b[N];
int n;
void init_ST()
{
	for(int i=1;i<=n;i++) stmax[i][0]=b[i];
	int k=log2(n);
	for(int j=1;j<=k;j++)
	{
		for(int i=1;i<=n-(1<<j)+1;i++)
		{
			stmax[i][j]=max(stmax[i][j-1],stmax[i+(1<<(j-1))][j-1]);
		}
	}
}
int query_ST(int l,int r)
{
	int k=log2(r-l+1);
	return max(stmax[l][k],stmax[r-(1<<k)+1][k]);
}
int main()
{
	Fast;
	int m;
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>b[i];
    init_ST();
    while(m--)
    {
    	int l,r;
    	cin>>l>>r;
    	cout<<query_ST(l,r)<<'\n';
	}
}
*/ 


