/*
线段树的查询方法：

如果这个区间被完全包括在目标区间里面，直接返回这个区间的值

如果这个区间的左儿子和目标区间有交集，那么搜索左儿子

如果这个区间的右儿子和目标区间有交集，那么搜索右儿子
*/


//区间修改，单点查询完整测试代码：
#include <bits/stdc++.h>
using namespace std;
const int maxn = 5e5 + 7;

int n, m, s, t;
int ans;
int a[maxn];
struct segment_tree
{	
	struct node
	{
		int l, r;
		int num;
	}tr[maxn * 4];
	//递归建树
	void build(int p, int l, int r)
	{
		tr[p] = {l, r, 0};
		if(l == r) {
			tr[p].num = a[l];
			return ;
		}
		int mid = l + r >> 1;
		build(p << 1, l, mid);
		build(p << 1 | 1, mid + 1, r);
	}		
	//区间修改
	void modify(int p, int l, int r, int k) 
	{
		if(tr[p].l >= l && tr[p].r <= r) {
			tr[p].num += k;
			return ;
		}
		int mid = tr[p].l + tr[p].r >> 1;
		if(l <= mid) modify(p << 1, l, r, k); //p<<1 == p*2;
		if(r > mid) modify(p << 1 | 1, l, r, k); //p<<1|1 == p*2+1
	}
	//** 单点修改
	// void modify(int t,int x,int y)
	// {
	// 	if(a[t].l==x&&a[t].r==x)
	// 	{
	// 		a[t].w=y;
	// 		return ;
	// 	}	
	// 	int mid=(a[t].l+a[t].r)/2;
	// 	if(x<=mid)
	// 	{
	// 		modify(2*t,x,y);
	// 		a[t].w=a[2*t].w+a[2*t+1].w;
	// 	}	
	// 	else
	// 	{
	// 		modify(2*t+1,x,y);
	// 		a[t].w=a[2*t].w+a[2*t+1].w;
	// 	}	
	// 	return ;
	// }
	//区间查询
	void query(int p, int x)
	{
		ans += tr[p].num;
		if(tr[p].l == tr[p].r) return;
		int mid = tr[p].l + tr[p].r >> 1;
		if(x <= mid) query(p << 1, x);
		else query(p << 1 | 1, x);
	}
}ST;

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; ++ i) {
	    scanf("%d", &a[i]);
	}
	ST.build(1, 1, n);
    for (int i = 1; i <= m; ++ i) {
        int c;
        scanf("%d", &c);
        if(c == 1) {
            int x, y, z;
            scanf("%d%d%d", &x, &y, &z);
            ST.modify(1, x, y, z);
        }
        else {
            ans = 0;
            int x;
            scanf("%d", &x);
            ST.query(1, x);
            printf("%d\n", ans);
        }
    }
	return 0;
}
/*
int main()
{
	n = 100;
	for (int i = 1; i <= n; ++ i) {
		a[i] = i;
	}
	ST.build(1, 1, n);
	m = 10;
	for (int i = 1; i <= m; ++ i) {
		int l = 1, r = 100;
		ST.modify(1, l, r, 10000);
		ans = 0;
		// query(p, x), p = 1, x 为想要查询的点的下标
		ST.query(1, 50); // 单点查询 下标为 50 的点的值，ans = 50 + 10000 * i
		cout << i << " " << ans << '\n';
		ans = 0;
		ST.query(1, 100); // 单点查询 ans = 100 + 10000 * i
		cout << i << " " << ans << '\n'; 
	}
	return 0;
}
*/


//*****法2
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// const int N=1007;
// struct haha{
// 	int l,r,w;
// }a[N];
// int b[N];
// void build(int p,int l,int r)
// {
// 	a[p]={l,r,b[l]};
// 	if(l==r)
// 		return ;
// 	int mid=(l+r)/2;
// 	build(2*p,l,mid);
// 	build(2*p+1,mid+1,r);
// 	a[p].w=a[2*p].w+a[2*p+1].w;
// }
// void modify(int t,int x,int y)
// {
// 	if(a[t].l==x&&a[t].r==x)
// 	{
// 		a[t].w=y;
// 		return ;
// 	}	
// 	int mid=(a[t].l+a[t].r)/2;
// 	if(x<=mid)
// 	{
// 		modify(2*t,x,y);
// 		a[t].w=a[2*t].w+a[2*t+1].w;
// 	}	
// 	else
// 	{
// 		modify(2*t+1,x,y);
// 		a[t].w=a[2*t].w+a[2*t+1].w;
// 	}	
// 	return ;
// }
// int query(int t,int l,int r)
// {
// 	if(a[t].l==l&&a[t].r==r)
// 		return a[t].w;
// 	int mid=(a[t].l+a[t].r)/2;
// 	if(mid<l)
// 		return query(2*t+1,l,r);
// 	else if(mid>=r)
// 		return query(2*t,l,r);
// 	else
// 		return query(2*t,l,mid)+query(2*t+1,mid+1,r);
// }
// int main()
// {
// 	int n,m;
// 	cin>>n;
// 	for(int i=1;i<=n;i++)
// 		cin>>b[i];
// 	build(1,1,n);
// 	cin>>m;
// 	while(m--)
// 	{
// 		int op;
// 		cin>>op;
// 		if(!op)
// 		{
// 			int x,y;
// 			cin>>x>>y;
// 			modify(1,x,y);
// 		}
// 		else
// 		{
// 			int l,r;
// 			cin>>l>>r;
// 			cout<<query(1,l,r);
// 		}
// 	}
// 	return 0;
// }