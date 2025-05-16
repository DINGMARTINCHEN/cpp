#include <iostream>
using namespace std;
int main()
{
    int n,max=-32768,min=32767,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		if(a<min)
		{
			min=a;
		}
		if(a>max)
		{
			max=a;
		}
		sum+=a;
	 } 
	cout<<max<<endl<<min<<endl<<sum;
   return 0;
}
