#include<bits/stdc++.h>
using namespace std;
int process(int a,int sum)
{
	int q=1;
	while(a!=0)
	{
		q*=a%10;
		a=(a-a%10)/10;
    }
	sum++;
	if(q>=10)
	{
		process(q,sum);
	}
	else
	{
		return sum;
	}
};
int main()
{
	int a,b;
	cin>>a>>b;
	map<int,int>mp;
	int max=0;
	for(int i=a;i<=b;i++)
	{
		int c;
		if(i<10)
		{
			c=0;
		}
		else
		{
			c=process(i,0);
		}
		mp[i]=c;
		if(max<c)
		{
			max=c;
		}
	}
	cout<<max<<endl;
	int ss=0;
	int answer[999];
	for(int i=a;i<=b;i++)
	{
		if(mp[i]==max)
		{
		    answer[ss]=i;
			ss++;
		}
	}
	for(int i=0;i<ss;i++)
	{
		cout<<answer[i];
		if(i<ss-1)
		{
			cout<<" ";
		}
	}
}
