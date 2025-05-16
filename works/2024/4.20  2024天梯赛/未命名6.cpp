#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int mm[n];
	int aa[n][104];
	for(int i=0;i<n;i++)
	{
		
		cin>>mm[i];
		for(int j=0;j<mm[i];j++)
		{
			cin>>aa[i][j];
		}
	}
	int q=0;
	cin>>q;
	for(int k=0;k<q;k++)
	{
		int a,b;
		cin>>a>>b;
		int ssum=0;
		for(int i=0;i<n;i++)
	    {
	    	int sum=0;
		    for(int j=0;j<mm[i];j++)
		    {
		    	if(aa[i][j]==a) sum++;
		    	if(aa[i][j]==b)sum++;
		    }
		    if(sum==2)
		    {
		    	ssum++;
			}
    	}
    	cout<<ssum<<endl;
	}
}
