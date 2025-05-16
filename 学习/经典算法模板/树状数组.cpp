#include<iostream>
#define lowbit(x) (x&(-x))
typedef long long ll; 
using namespace std;
int c[2000006];
int n,m;
ll ans;
int add(int x,int k)  //单点修改
{
	for(int i=x;i<=n;i+=lowbit(i))
	    c[i]+=k;
}

int search(int l,int r)  //区间查询
{
	for(int i=r;i;i-=lowbit(i))
	    ans+=c[i];
	for(int i=l-1;i;i-=lowbit(i))
	    ans-=c[i];
	return 0;
}

int main()
{
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		int number;
		scanf("%d",&number);
		add(i,number);
	}
	for(int i=1;i<=m;i++)
	{
		int choice,x,y;
		scanf("%d %d %d",&choice,&x,&y);
		if(choice==1) add(x,y);
		else
		{
			ans=0;
			search(x,y);
			printf("%lld\n",ans);
		}
	}
	return 0;
}

/*
//离散化:用时间换空间
（求逆序对的过程中的离散化）
#include <bits/stdc++.h>
using namespace std;
int a[N],b[N];
bool cmp(const int x,const int y)
{
    if(b[x]==b[y]) return x>y;
    return b[x]>b[y];
}

signed main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
        a[i]=i;
    }
    sort(a+1,a+1+n,cmp);
}

例如:
b:5 4 1 2 999
a:2 3 5 4 1
a为离散化后的b数组
*/