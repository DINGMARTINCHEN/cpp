#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n%8==0||n%6==0)
	{
		cout<<"Yes";
		return 0;
	}
	for(int i=0;n;i++)
	{
	    if(n%10==8||n%10==6)
	    {
	    	cout<<"Yes";
	    	return 0;
    	}
		n=(n-n%10)/10;
	}
	cout<<"No";
	return 0;
 } 
