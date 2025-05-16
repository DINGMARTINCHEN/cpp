#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[99999][99999];
    int t[99999*99999];
    int r[99999]={0},l[99999]={0},c[99999]={0};
	int n,T;
	cin >> n >> T;
	for(int i=1,k=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++) 
        {        
            a[i][j]=k++;
        }
	}
	for(int i=1;i<=T;i++)
	{
		cin >> t[i];
        t[i]--;//对数据进行处理
		int x=t[i]/n;
		int y=t[i]%n; //判断行和列
		if(x==y) 
        {
            c[1]++; 
        }
		if(x+y==n-1) 
        {
            c[2]++; //判断是否在对角线上
        }    
		if(++r[x]==n||++l[y]==n||c[1]==n||c[2]==n)
		{
			cout << i;
			return 0;
		}
	} 
	cout << -1;
	return 0;
}
