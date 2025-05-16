#include <iostream>
using namespace std;
int main(){
	long long m,w,r,i,sum=0;
	cin>>m>>r>>w;
	while(m<=w)
	{
		m=m*(1+r/100.0);
		sum=sum+1;
		if(m>w)
		{
			break;
		}
	}
	cout<<sum-1;
	return 0;
}
