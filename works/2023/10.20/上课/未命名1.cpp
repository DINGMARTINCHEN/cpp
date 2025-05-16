 #include<stdio.h>
#include<iostream>
#include <malloc.h>
using namespace std;
int main()
{
	int a[5];
	int n;
	int *b;
	b=(int *)malloc(n*sizeof(int));
//	cout<<a<<endl;
//	cout<<sizeof(a); 
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	cin>>b[i];
	}for(int i=0;i<n;i++)
    {
    	cout<<b[i]<<" ";
	}
    return 0;
 } 
