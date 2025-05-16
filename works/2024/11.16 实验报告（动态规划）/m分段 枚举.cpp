#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,m,a[105];

bool check(int k)
{
	int tmp=0,ans=1;
	for(int i=1;i<=n;i++)
	{
		if(tmp+a[i]>k)
		{
			tmp=0;
			ans++;
		}
		tmp+=a[i];
	}
	if(ans<=m)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

signed main() 
{
    cin>>n>>m;
	int l=0,r=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		r+=a[i];
		l=max(l,a[i]);
	}
	for(int i=0;i<=r;i++)//找最大值中的最小值，所以从小到大遍历
    {
        if(check(i)==1)
        {
            cout<<i;
            return 0;
        }
    }
	return 0;
}

//在check函数内部，使用了一个循环来遍历数组a的所有元素，这个循环的时间复杂度是O(n)。

//因此，总的时间复杂度是O(r * n)。