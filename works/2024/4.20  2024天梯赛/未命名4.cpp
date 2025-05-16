#include<bits/stdc++.h>
using namespace std;
struct times
{
	int sum;
	long long num;
};
times aaa[9999];
long long process(long long a,long long sum)
{
	long long q=1;
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
//	cout<<process(9999,0);
	long long a,b;
	cin>>a>>b;
	long long max=0;
	for(long long i=a;i<=b;i++)
	{
		long long c;
		if(i<10)
		{
			c=0;
		}
		else
		{
			c=process(i,0);
		}
		aaa[i].num=i;
		aaa[i].sum=c;
		if(max<c)
		{
			max=c;
		}
	}
	cout<<max<<endl;
	long long ss=0;
	long long answer[999];
	for(long long i=a;i<=b;i++)
	{
		if(aaa[i].sum==max)
		{
		    answer[ss]=aaa[i].num;
			ss++;
		}
	}
	for(long long i=0;i<ss;i++)
	{
		cout<<answer[i];
		if(i<ss-1)
		{
			cout<<" ";
		}
	}
}
