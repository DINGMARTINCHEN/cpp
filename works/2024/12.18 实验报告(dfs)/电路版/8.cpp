#include<bits/stdc++.h>
#define int long long 
using namespace std;

const int N=30;
 
int n,m,minn=100000,tmp,l,r;
int opt[N],arr[N][N],a[N];
 
int dfs(int t)
{
	int i,j;
	if(t==n)
    {
		tmp = 0;
		for(i=0;i<m;i++)
        {
			for(j=0;j<n;j++)
            {
				if(arr[a[j]][i] == 1)
                {
					l = j;
					break; 
				}
			}
			for(j=n-1;j>=0;j--)
            {
				if(arr[a[j]][i] == 1)
                {
					r = j;
					break; 
				}
			}
		    if(tmp < r-l)
            {
			    tmp = r - l;
		    }
		}
		if(minn>tmp)
        {//�����ǰ���е������С����֪����С��������������С������Ͷ�Ӧ������
			minn = tmp;
			for(i=0;i<n;i++)
            {
				opt[i] = a[i] + 1;
			}
		}
	}
	
	for(i=t;i<n;i++)
    {
		swap(a[i],a[t]);
		dfs(t+1);
		swap(a[i],a[t]);
	}
	return 0;
}
 
signed main(){
	cin>>n>>m;
    for(int i=0;i<n;i++)
    {
    	a[i] = i;
	}
	for(int i=0;i<n;i++)
    {
		for(int j=0;j<m;j++)
        {
			cin>>arr[i][j];
		}
	}
	
	dfs(0);
	cout<<minn<<endl;
	for(int i=0;i<n;i++)
    {
		cout<<opt[i]<<" ";
	}
	
	return 0;
}