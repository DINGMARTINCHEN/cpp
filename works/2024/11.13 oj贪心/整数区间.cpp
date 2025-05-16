#include<iostream>
#include<algorithm>
using namespace std;
const int N= 1e4+7;
pair<int,int>r[N];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	scanf("%d%d",&r[i].second,&r[i].first);
	sort(r+1,r+n+1);
	int cur = r[1].first,cnt=1;
	for(int i=2;i<=n;i++){
		if(r[i].second<=cur) continue;
		cur = r[i].first,++cnt;
	}
	printf("%d",cnt);
	return 0;
}
