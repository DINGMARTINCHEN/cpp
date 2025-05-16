#include<iostream>
#include<algorithm>
const int N=1007;
int a[N],id[N];
bool cmp(const int &x,const int &y)
{
	return a[x]<a[y]||(a[x]==a[y]&&x<y);
}
int main()
{
	int n,sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;++i)
	{
		scanf("%d",a+i);
		id[i]=i;
	}
	std::sort(id+1,id+n+1,cmp);
	for(int i=1;i<=n;++i){
		printf("%d ",id[i]);
		sum+=a[id[i]]*(n-i+1);
	}
	printf("\n%.2f",1.*sum/n);
	return 0;
}