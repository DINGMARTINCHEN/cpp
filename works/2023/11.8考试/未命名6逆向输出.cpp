#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	long long a,b=0;
	cin>>a;
	for(int i=0;a;i++)
	{
	b*=10;
		b=b+a%10;
		
//		if(a%10!=0)
//		{
//			cout<<a%10;
//		}
		a=(a-a%10)/10;
//		cout<<endl<<'a'<<a<<endl;
	 } 
	 cout<<b;
	return 0;
 } 
