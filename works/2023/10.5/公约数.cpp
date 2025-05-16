//#include <iostream>
//using namespace std;
//int main()
//{
//	int a,b,c;
//	bool d=1;
//	cin>>a>>b;
//	if(b>a)
//	{
//		c=a;
//		a=b;
//		b=c;
//	}
//	for(int i=b;i>1;i--)
//	{
//		if(a%i==0&&b%i==0)
//		{
//			cout<<i;
//			d=0;
//			break;
//		}
//}
//if(d==1)
//{
//	cout<<0;
//}
//	return 0;
//}
#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	bool d=false;
	cin>>a>>b;
	if(b>a)
	{
		c=a;
		a=b;
		b=c;
	}
	for(int i=b;i>1;i--)
	{
		if(a%i==0&&b%i==0)
		{
			cout<<i;
			d=true;
			break;
		}
    }
if(d==false)
{
	cout<<0;
}
	return 0;
}

