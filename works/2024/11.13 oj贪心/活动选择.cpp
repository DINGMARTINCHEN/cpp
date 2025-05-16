#include<cstdio>
#include<algorithm>
using namespace std;
const int N = 1007;
pair<int,int> a[N];
int main()
{
	int n,cnt=1;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
		scanf("%d%d",&a[i].second,&a[i].first);
	sort(a+1,a+n+1);
	for(int i=2,cur=a[1].first; i<=n; i++)
		if(a[i].second>=cur)
			++cnt,cur=a[i].first;
	printf("%d\n",cnt);
	return 0;
}
