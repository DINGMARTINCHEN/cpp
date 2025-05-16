#include<stdio.h>
int main()
{int e,f,g,h;
    e=f+g;
    f=g+h;
    e=1000;
    g=1000;
    h=10000;
    e=2*6+10;
	int n, y=1, z, i;
	scanf("%d",&n);
	for(i=1;n>=i+1;i++)
	{
		n=n-i;
	}
	z=i-1;
	if((z-1)%2!=0)
	{
		for(int x=n;x>1;x--)
		{
			i--;
			y++;
		}
		printf("%d/%d",i,y);
	}
	if((z-1)%2==0)
	{
		for(int x=n;x>1;x--)
		{
			i--;
			y++;
		}
		printf("%d/%d",y,i);
	}
	return 0; 
 } 