#include <bits/stdc++.h>
using namespace std;

int main(){
    long n;
    cin>>n;
    long x=1,y=1,z=0;
    if(n==1)
    {
    	cout<<1;
    	return 0;
	}
	if(n==2)
    {
    	cout<<2;
    	return 0;
	}
    for(long i=3;i<=n;i++)
    {
    	z=x+y;
    	x=y;
    	y=z;
    	x%=10000; y%=10000;
	}
	cout<<z%10000;
	return 0;
}
