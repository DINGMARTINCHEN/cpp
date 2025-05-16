#include<iostream>
#include <string.h>
#include<stdio.h>
using namespace std;
int main()
{
	char a[99999];
	int sum=0;
	gets(a);
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]<='z'&&a[i]>='a'||a[i]<='Z'&&a[i]>='A')
		{
			sum=sum+1;
		}
	}
	cout<<sum;
	return 0;
 } 
