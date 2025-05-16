#include<iostream>
using namespace std;
int main()
{
	int n,sum1=0,sum2=0,sum3=0,sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		sum1+=a;
		sum2+=b;
		sum3+=c;
	}
	cout<<sum1<<" "<<sum2<<" "<<sum3<<" "<<sum1+sum2+sum3;
}
