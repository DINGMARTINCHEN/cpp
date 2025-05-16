#include<stdio.h>
#include<iostream>
#include <malloc.h>
using namespace std;
int main()
{
	long long *p,*q;
	p=(long long *)malloc(sizeof(long long));
	*p=100;
	
	cout<<p<<endl<<*p;
    return 0;
 } 

