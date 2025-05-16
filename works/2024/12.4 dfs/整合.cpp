//A	全排列问题(form)	
 
#include<bits/stdc++.h>
using namespace std;
const int N=10;
int n,p[N],ht[N]={0}; 
void dfs(int index)
{	if(index==n+1)
	{	for(int i=1;i<=n;i++) 
			cout<<p[i]<<" ";
		cout<<endl;
		return;
	}
	for(int i=1;i<=n;i++) 
	{	if(ht[i]==0)
		{	p[index]=i;
			ht[i]=1;
			dfs(index+1);
			ht[i]=0;
		}
	}
 } 
int main()
{	
	cin>>n;
	dfs(1);
	return 0;
 }
 
//B	有重复元素的排列问题(perm)
 
#pragma GCC optimize(2)
#include<bits/stdc++.h>
using namespace std;
int a[505],n,ans;
char b[505];
void print()
{	ans++;
	for(int i=1;i<=n;i++)
		printf("%c",b[i]);
	printf("\n");
}
void dfs(int t)
{	for(int i=1;i<=255;i++)
	if(a[i]>0)
	{	b[t]=i;
		a[i]--;
		if(t==n) print();
		dfs(t+1);
		a[i]++;
	 } 
}
int main()
{	cin>>n>>b;
	for(int i=0;i<n;i++)
		a[b[i]]++;
	dfs(1);
	cout<<ans;
	return 0;
}
 
//C	组合的输出(compages)
 
#include<bits/stdc++.h>
using namespace std;
int a[30],n,r;
bool vis[30];
void dfs(int k)
{	if(k>r)
	{	for(int i=1;i<=r;i++)
			printf("%3d",a[i]);
		puts("");
		return;
	}
	for(int i=a[k-1]+1;i<=n;++i)
	{	if(vis[i]==0)
		{	a[k]=i;
			vis[i]=1;
			dfs(k+1);
			vis[i]=0;
		}
	}
}
int main()
{	scanf("%d%d",&n,&r);
	dfs(1);
	return 0;
 }
 
//D自然数拆分(chai)
 
#include<bits/stdc++.h>
using namespace std;
int n;
int a[1000];
void dfs(int x,int u)
{	if(u==0&&x>2)
	{	for(int i=1;i<x-1;i++)
			printf("%d+",a[i]);
		printf("%d\n",a[x-1]);
	}
	for(int i=a[x-1];i<=u;i++)
	{	a[x]=i;
		u=u-i;
		dfs(x+1,u);
		a[x]=0;
		u=u+i;
	}
 } 
int main()
{	cin>>n;
	a[0]=1;
	dfs(1,n);
	return 0;
}
 
//E	整数的划分(partition)
 
#include<bits/stdc++.h>
using namespace std;
int a[9],n,k,s;
void dfs(int x)
{	if(n==0) return;//若划分好了返回 
	if(x==k)
	{	if(n>=a[x-1]) s++;
		return;
	}
	for(int i=a[x-1];i*(k-x+1)<=n;i++)//剪枝分支限界 
	{	a[x]=i;
		n-=i;
		dfs(x+1);
		n+=i;
	}
 } 
 int main()
 {	cin>>n>>k;
 	a[0]=1;
 	dfs(1);
 	cout<<s<<endl;
 	return 0;
 }
 
//F	子集和问题(subsum)
 
#include<bits/stdc++.h>
using namespace std;
const int N=1e4+7;
int n,c,a[N],ans[N],cnt,sum;
bool done;
void dfs(int k)
{	if(sum==c)
	{	done=true;
		for(int i=1;i<=cnt;i++) cout<<ans[i]<<" ";
		return;
	}
	if(k>n||sum>c) return;
	for(int i=k;i<=n&&!done;i++)
	{	sum+=a[i];
		ans[++cnt]=a[i];
		dfs(i+1);
		sum-=a[i];
		--cnt;
	}
}
int main()
{	cin>>n>>c;
	int sum=0;
	for(int i=1;i<=n;i++)
	{	scanf("%d",a+i);
		sum+=a[i];
	}
	if(sum<c) 
	{	puts("No Solution!");
		return 0;
	}
	dfs(1);
	if(done ==false) puts("No Solution!");
	return 0;
}
 
//G工作分配问题(job)
 
#include <bits/stdc++.h>
using namespace std;
int num[30][30];
int book[30];
int mincost = 0x3F3F3F3F;
int n;
 
void dfs(int i, int cur ) {
    if (i > n) {
        if (cur < mincost)
            mincost = cur ;
        return;
    }
    for (int j = 1; j <= n; j++) {
        if (book[j] == 0 && cur + num[i][j] < mincost) {
            book[j] = 1;
            cur += num[i][j];
            dfs(i + 1, cur);
            book[j] = 0;
            cur -= num[i][j];
        }
    }
}
 
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cin >> num[i][j];
    }
    dfs(1, 0);
    cout << mincost;
    return 0;
}
 
//H最佳调度问题
 
//每次递归深搜时，记忆一下机器是否安排过当前工作（贪心+剪枝+标记【记忆化】） 
#include<bits/stdc++.h>
using namespace std;
int a[10007], b[10007],minn=1000000000,n,k;
void dfs(int x,int y)//当前安排的第x个任务，y：k个机器中目前所需要的最长时间 
{	if(y>=minn) return;//剪枝：当前最值>最小时间 
	if(x==0) //更优：所有任务都已经安排好 
	{	minn=y;
		return ;
	}
	int vis[1000]={0};//每次递归清零 
	for(int i=1;i<=k;i++)//将任务x安排给i机器 
	{	if(vis[b[i]]) continue;//i机器已经试过 
		vis[b[i]]=true;//记忆化，x可安排在i机器 
		b[i]+=a[x];
		dfs(x-1,max(y,b[i]));//k台机器最长时间 
		b[i]-=a[x];//x不能安排在i机器 
	}
	return;
}
int main()
{	cin>>n>>k;
	for(int i=1;i<=n;i++)
		scanf("%d",a+i);
	sort(a+1,a+n+1);
	dfs(n,0);
	cout<<minn;
	return 0;
}
 
//I皇后问题(queen)
 
#include<bits/stdc++.h>
using namespace std;
int n,q[30],cnt=0;
bool na[30],pie[30],col[30],can=true;
void queen(int k)
{	if(k>n)
	{	can=false;
		cnt++;
		for(int i=1;i<=n;i++)
			cout<<q[i]<<" ";
		puts("");
		return;
	}
	for(int i=1;i<=n;i++)
	{	if(col[i]||na[k+n-i]||pie[k+i]) continue;
		col[i]=na[k+n-i]=pie[k+i]=true;
		q[k]=i;
		queen(k+1);
		col[i]=na[k+n-i]=pie[k+i]=false; 
	}
}
int main()
{	cin>>n;
	queen(1);
	if(can) cout<<"no solute!";
	return 0;
}
 
//J	迷宫问题(migong)
 
#include<bits/stdc++.h>
using namespace std;
const int dx[]={-1,-1,-1,0,1,1,1,0},dy[]={-1,0,1,1,1,0,-1,-1};
int n,ans,g[11][11];
void dfs(int x,int y)
{	if(x==1&&y==n)
	{	ans++;
		return ;
	}

	for(int i=0;i<8;++i)
	{	int xx=x+dx[i],yy=y+dy[i];
		if(xx<1||xx>n||yy<1||yy>n||g[xx][yy]) continue;
		g[xx][yy]=2;
		dfs(xx,yy);
		g[xx][yy]=0;
	}
}
int main()
{	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>g[i][j];
	g[1][1]=2;
	dfs(1,1);
	cout<<ans;
	return 0;
}
 
//K部落卫队(byteland)
 
#include<bits/stdc++.h>
using namespace std;
const int N=107;
int n,m,tot,mx,cur[N];
bool g[N][N],ans[N];
pair<int,int> a[N];
void dfs(int k)
{	if(tot+n-k+1<=mx) return;
	if(k>n)
	{	if(tot>mx)
		{	memset(ans,0,sizeof ans);
			for(int i=1;i<=tot;++i)
				ans[cur[i]]=true;
			mx=tot;
		}
		return;
	}
	int i;
	for(i=1;i<=tot;++i)
		if(g[k][cur[i]]) break;
	if(i>tot)
	{	cur[++tot]=k;
		dfs(k+1);
		--tot;
	}
	dfs(k+1);
}
int main()
{	cin>>n>>m;
	for(int i=1;i<=n;i++)
		a[i].second=i;
	while(m--)
	{	int u,v;
		cin>>u>>v;
		g[u][v]=g[v][u]=true;
		++a[u].first,++a[v].first;
	}
	stable_sort(a+1,a+n+1);
	dfs(1);
	cout<<mx<<endl;
	for(int i=1;i<=n;i++)
		cout<<ans[i]<<" ";	
	return 0;
}
 
//L	装载问题(load)
 
#include <bits/stdc++.h>
using namespace std;
int n, c, sum = 0, ans = 0;
int a[45];
 
void dfs(int x) {
    if (x == 0)
        return;
    for (int i = x; i >= 1; i--) {
        sum += a[i];
        if (sum > c) {
            sum -= a[i];
        }
        if (i == 1) {
            ans = max(sum, ans);
            sum = 0;
        }
    }
    dfs(x - 1);
}
 
int main() {
    cin >> n >> c;
    for (int i = 1; i <= n; i++)
        scanf("%d", a + i);
    sort(a + 1, a + n + 1);
    dfs(n);
    cout << ans;
    return 0;
}
 

