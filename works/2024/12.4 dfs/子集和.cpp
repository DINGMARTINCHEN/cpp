#include<iostream>
using namespace std;
const int N=1e4+7;
int n,c,a[N],ans[N],cnt,sum;
bool done;
void dfs(int k)
{
	if(sum==c){
		done=true;
		for(int i=1;i<=cnt;++i)
		{
			cout<<ans[i];
			cout<<" ";
		}
		return ;
	}
	if(k>n||sum>c)return ;
	for(int i=k;i<=n&&!done;++i)
	{
		sum+=a[i];
		ans[++cnt]=a[i];
		dfs(i+1);
		sum-=a[i];
		--cnt;
	}
}
int main()
{
	cin>>n>>c;
	int sumn=0;
	for(int i=1;i<=n;++i){
		cin>>a[i];sumn+=a[i];
	}
	if(sumn<c){cout<<"No Solution!";return 0;}
	dfs(1);
	if(done==false )cout<<"No Solution!";
	return 0;
}
 
