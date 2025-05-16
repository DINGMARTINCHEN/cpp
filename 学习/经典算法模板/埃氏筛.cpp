//埃氏筛和线性筛 
/*
一、素数筛的定义
给定一个整数n，求出[1,n]之间的所有质数(素数)(m~n之间的素数可稍修改即可)，
这样的问题为素数筛(素数的筛选问题)。
二、埃氏筛法(Eratosthenes筛法)（欧氏筛略）
埃氏筛法又叫做Eratosthenes筛法，一般叫做埃氏筛。埃氏筛的思想是：
所有的素数x的倍数2x，3x，...都不是质数。
因此我们可以从2开始从小到大扫描每个数x，并把x的倍数2x....标记为合数。
当扫描到某个数y没有被标记为合数，那么y就属于质数。
Eratosthenes筛法的复杂度为O(NloglogN)。效率非常接近线性。
以下为Eratosthenes筛法模板：
*/
/*
#include<iostream>//埃氏筛 O(nloglogn)
#include<cstdio>
#include<cstring>
using namespace std;
const int N=1e6+5;
int prime[N],p[N],tot;//primed存储素数，p为素数标记，tot素数计数 
inline int era(int n){
	for(int i=1;i<=n;i++) p[i]=1;//初始标记都是素数 
	memset(prime,0,sizeof(prime));//素数数组清0 
	p[1]=p[0]=0;//1和0标记合数：如果用0下标 
	for(int i=1;i<=n;i++){
		if(!p[i]) continue;//标记为0的为合数 
		prime[++tot]=i;//prime[]存储了[1,n]的所有质数
		for(int j=i*2;j<=n;j+=i) p[j]=0;//筛除i的倍数j合数:1*j是素数 
	}
	return tot;
}
int main()
{
	int n;
	cin>>n;
	tot=era(n);
	for(int i=1;i<=tot;i++)
		printf("%d ",prime[i]);
	return 0;
}
*/

/*
三、线性筛法
埃氏筛的问题:某些合数会重复标记！如30会为2 3 5重复标记，增加了复杂度。
如果每个合数能唯一地标记一次就好了。
线性筛法通过:从大到小不断累乘质因子的方法标记合数，
即30的标记方式为：30=15*2=10*3=6*5=5*3*2:
这样的思路是：从最大的质因子开始标记合数，且只标记离最大质因子最近的合数，
后续的合数不再标记：巧妙地规避解决了埃氏筛的重复标记问题。
实现方式为：
1.依次扫描[2,n]的每一个数a
2.若没有被标记为合数，说明a是质数，此时保存起来
3.依次扫描a*prime[j]<=n的每一个质数，标记a*prime[j]为合数，
且保证prime[j]为a*prime[j]的最小质因子(即只标注最近最小的合数，不向后进行)。
故每个合数只会被它的最小质因子筛一次，所以线性筛的复杂度为O(N)。
以下为线性筛法的模板：
*/ 
//埃氏筛-线性筛 
#include<iostream>//埃氏筛+线性筛O(n)
#include<cstdio>
#include<cstring>
using namespace std;
const int N=1e6+5;
int p[N],prime[N],tot;//p起始为0都标注成素数 
inline int era_line(int n){
	int tot=0;
	for(int i=2;i<=n;i++){
		if(!p[i]) prime[++tot]=i;//存储素数 
		for(int j=1;j<=tot,i*prime[j]<=n;j++){
			p[i*prime[j]]=1;//标记合数,此时prime[j]是合数i*prime[j]的最小素因子
			if(i%prime[j]==0) break;//只标注到离prime[j]最近的合数，确保每合数只标记一次 
			//6和9:当i=3时，j=1,prime[1]=2时标合数6；j=2标合数9：结束！ 
		}//总结：每求得一个素数时，合数只标注到:i*prime[tot]就结束！ 
	}
	return tot;
}
int main()
{
	int n;
	cin>>n;
	tot=era_line(n);
	for(int i=1;i<=tot;i++)
		printf("%d ",prime[i]);
	return 0;
}

