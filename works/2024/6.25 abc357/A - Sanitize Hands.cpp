#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(m<a)
        {
            cout<<sum;
            return 0;
        }
        else
        {
            m-=a;
            sum++;
        }
    }
	// scanf("%d%d",&n,&m);
	// int r=0;
	// rep(i,0,n) 
    // {
	// 	int x;
	// 	scanf("%d",&x);
	// 	if (m>=x) {
	// 		m-=x;
	// 		r++;
	// 	} else break;
	// }
	// printf("%d\n",r);
}