// #include<bits/stdc++.h>
// using namespace std;
// const int N=50010;
// int a[N],b[N];
// int main()
// {
// 	int t,n;
// 	int lc=0,rc=0;
// 	cin>>t>>n;
// 	for(int i=0;i<n;i++)
// 	{
// 		int x;
// 		cin>>x;
// 		if(x<0) //左边的点 
// 			a[++lc]=-x; 
// 		else b[++rc]=x; //右边的点 
// 	}
// 	sort(a+1,a+lc+1);
// 	sort(b+1,b+rc+1);
// 	int ans=0;
// 	for(int i=0;i<=lc;i++)//往左走，往右走 
// 	{
// 		int lim=t-2*a[i];
// 		if(lim<0) break;
// 		int l=0,r=rc;
// 		while(l<r)
// 		{
// 			int mid=l+r+1>>1;
// 			if(b[mid]<=lim) l=mid;
// 			else r=mid-1;
// 		}
// 		ans=max(ans,i+l);
// 	}
// 	for(int i=0;i<=rc;i++) //往右走，往左走 
// 	{
// 		int lim=t-2*b[i];
// 		if(lim<0) break;
// 		int l=0,r=lc;
// 		while(l<r)
// 		{
// 			int mid=l+r+1>>1;
// 			if(a[mid]<=lim) l=mid;
// 			else r=mid-1;
// 		}
// 		ans=max(ans,i+l);
// 	}
// 	cout<<ans<<endl;
// 	return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int t,n,a[50505],MAX;
// bool check(int x){
// 	for(int i=x;i<=n;i++){//枚举右点
// 		int l=i-x+1;//推出左点
// 		if(a[i]<=0){//一条道走到黑的判断
// 			if(-a[l]<=t)return true;
// 		}
// 		if(a[l]>=0){//不撞南墙不回头的判断
// 			if(a[i]<=t)return true;
// 		}
// 		if(a[l]<=0&&a[i]>=0){//这里把另外两种情况和在了一起
// 			if(min(-a[l],a[i])+(a[i]-a[l])<=t)return true;
// 		}
// 	}
// 	return false;
// }
// int main(){
// 	scanf("%d%d",&t,&n);
// 	for(int i=1;i<=n;i++){
// 		scanf("%d",&a[i]);
// 	}
// 	sort(a+1,a+1+n);
// 	int lt=-1,rt=n+1;//记住，l一定要设置为-1，万一一个也访问不了捏？
// 	while(lt+1<rt){
// 		int mid=lt+(rt-lt)/2;//等价于（lt+rt）/2，但是这样一定爆不掉int
// 		if(check(mid)){
// 			lt=mid;//如果可行，就让l（ef）t过去，因为我们想让他越来越大
// 		}
// 		else{
// 			rt=mid;
// 		}
// 	}
// 	printf("%d",lt);//因为最后可行的mid被l（ef）t存起来了，so输出l（ef）t
// 	return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int t,n;
int a[100001];
bool check(int x){//判断函数，表示的是能否访问到x个路标
	for(int r=x;r<=n;r++){//枚举右端点
		int l=r-x+1;
		if(a[r]<=0)//如果右端点在原点左边，就要一直向左走
		    if(-a[l]<=t)return 1;//根据题意判断即可，可以就直接返回true
		if(a[l]>=0)//如果左端点在原点右边，就要一直向右走
		    if(a[r]<=t)return 1;//同上
		if(a[l]<=0&&a[r]>=0)//如果这段区间横跨了原点
		    if(min(a[r],-a[l])+a[r]-a[l]<=t)return 1;//那么我一定是先去距离原点短的那一边，再走到另一边
	}
	return 0;//如果整个循环执行完，没有找到可行解，那就返回false
}
int main(){
	cin>>t>>n;
	for(int i=1;i<=n;i++)
	    cin>>a[i];
	sort(a+1,a+1+n);//给所有路标位置排序
	int l=-1,r=n+1;//由于能访问的路标数量可能为0~n，所以把左边界设为1，右边界设为n+1，就可以保证二分到所有解
	while(l+1<r){//这里写l+1<r是为了防止最后l,r出现交叉的情况，即l>r
		int mid=(l+r)>>1;
		if(check(mid))l=mid;
		else r=mid;
        //更新l,r的值时写mid而不是mid+1或mid-1，也是为了防止最后l>r
	}
	cout<<l<<endl;//最后输出l
	return 0;//Happy ending~
} 