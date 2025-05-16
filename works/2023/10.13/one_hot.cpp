#include<iostream>
#include "bitset"
#include <cstring>
#include <string>
using namespace std;
int main()
{
	int n,a[10],b[999],c;
	cin>>n;
	int k=1;
	for(int i=0;i<10;i++)
	{		
		a[i]=k;
		k=k<<1;
	}
	for(int i=0;n;i++)
	{
		b[i]=n%10;
		n=(n-n%10)/10;
		c=i;
	}
	for(int i=c;i>=0;i--)
	{
		if(i==0)
		{
			cout<<bitset<10>(a[b[i]]);
		}
		else
		{
		cout<<bitset<10>(a[b[i]])<<",";
		}
	}
	return 0;
 } 



