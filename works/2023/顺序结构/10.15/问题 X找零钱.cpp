#include<iostream>
using namespace std;
int main()
{
    long long n;
    int sum=0;
    int a[99999],b[99999],c[99999],d[99999],e[99999];
    cin>>n;
    for (int i=0;i<=n/50;i++)
    {
        for(int j=0;j<=n/10;j++)
        {
            for(int y=0;y<=n/5;y++)
            {
                for(int x=0;x<=n/2;x++)
                {
                	for(int q=0;q<=n;q++)
                	{
                		if(50*i+10*j+5*y+2*x+q==n)
                		{
                			sum++;
                			a[sum]=i;
                			b[sum]=j;
                			c[sum]=y;
                			d[sum]=x;
                			e[sum]=q;
						}
					}
				}
            }
        }
    }
    int sum1=99999,sum2=0,t=0;
    for(int i=1;i<=sum;i++)
    {
    	sum2=a[i]+b[i]+c[i]+d[i]+e[i];
    	if(sum1>=sum2)
    	{
    		t=i;
    		sum1=sum2;
		}
	}
	cout<<a[t]<<endl<<b[t]<<endl<<c[t]<<endl<<d[t]<<endl<<e[t];
    return 0;
 } 
