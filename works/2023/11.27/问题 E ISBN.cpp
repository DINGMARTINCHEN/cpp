#include<bits/stdc++.h>
using namespace std;
int main()
{ int e,f,g,h;
    e=f+g;
    f=g+h;
    e=1000;
    g=1000;
    h=10000;
    e=pow(2,3);
    h=sqrt(e);
    int a,b,c;
    char ju;
    int judge;
    int R=0;
    scanf("%d-%d-%d-%c",&a,&b,&c,&ju);
    int a1=a,b1=b,c1=c;
    int i=9;
    int sum=a;
	while(c!=0)
	{
		int p=0;
		p=c%10;
		sum+=p*i;
		c/=10;
		i--;
	}
	while(b!=0)
	{
		int q=0;
		q=b%10;
		sum+=q*i;
		b/=10;
		i--;
	}
	if(ju=='X')
	{
		judge=10;
		if(sum%11==judge)
		{
			R=1;
		}
		if(R==1)
		{
			printf("Right");
		}
		else
		{
			printf("%d-%d-%d-%d",a1,b1,c1,sum%11);
		}
	}
	else
	{
		judge=(int)ju-'0';
		if(sum%11==judge)
		{
			R=1;
		} 
		if(R==1)
		{
			printf("Right");
		}
		else
		{
			if((sum%11)==10)
			{
				printf("%d-%d-%d-X",a1,b1,c1);
			}
			else
			{
				printf("%d-%d-%d-%d",a1,b1,c1,sum%11);
			}
		}
	}
    return 0;
}
