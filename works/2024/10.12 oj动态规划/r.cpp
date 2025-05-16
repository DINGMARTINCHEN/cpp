/*
9 3
1 2 3 4 5 6 7 8 9
*/
 
#include<iostream>
using namespace std;
int i,j,x,y,m,n,k,t,l;
int a[501];//存储每本书的页数
int f[501][501];//f[i][j]表示前i本书分给j个人抄写的最短复制时间
int d[501];//d[j]表示前j本书的总页数
int print(int i,int j)
{
	int t,x;
	if(j==0) return 0;
	if(j==1) 
	{
		cout<<1<<" "<<i<<endl;
		return 0;
	}
	t=i;
	x=a[i];
	while(x+a[t-1]<=f[m][k])
	{
		x=x+a[t-1];
		t--;
	}
	print(t-1,j-1);
	cout<<t<<" "<<i<<endl;
}
int main()
{
	cin>>m>>k;
	for(i=0;i<=500;i++)
	{
		for(j=0;j<=500;j++)
		{
			f[i][j]=10000000;//对f[i][j]进行初始化 
		}
	}	
	for(i=1;i<=m;i++)
	{
		cin>>a[i];
		d[i]=d[i-1]+a[i];
		f[i][1]=d[i];//把前i本书都分给1个人抄写需要的最短时间 
	}
//	for(i=1;i<=m;i++) cout<<d[i]<<" ";
//	cout<<endl;
	//f[0][0]=0;
	for(j=2;j<=k;j++)//j个人  
	{
		for(i=1;i<=m;i++)//i本书 
		{
			for(l=1;l<=i-1;l++)//最后一个人抄写的页数
			{
				if(max(f[i-l][j-1],d[i]-d[i-l])<f[i][j])
					f[i][j]=max(f[i-l][j-1],d[i]-d[i-l]);
			} 
		}
	}
	//cout<<f[m][k]<<endl; 
	print(m,k);
} 