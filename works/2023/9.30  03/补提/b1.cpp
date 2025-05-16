#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main(){
	char a[100000];
	cin>>a;
	for (int i=0;a[i];i++)
	{
	if(a[i]>='a'&&a[i]<='v'||a[i]>='A'&&a[i]<='V')
	{
		a[i]=a[i]+4;
	}
	else if(a[i]>='W'&&a[i]<='Z'||a[i]>='w'&&a[i]<='z')
	{
		a[i]=a[i]+4-26;
	}
	}
	cout<<a;
	return 0;
}
