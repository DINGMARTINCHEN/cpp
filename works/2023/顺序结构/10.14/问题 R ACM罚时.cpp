#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,all,wr,sum;
	char z;
	cin>>a>>z>>b>>c>>z>>d>>wr;
	all=d-b+(c-a)*60;
	sum=20*wr+all;
	cout<<sum;
	return 0;
 } 
