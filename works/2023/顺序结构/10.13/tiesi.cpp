#include <iostream>
using namespace std;
int main()
{
    long long a;
    cin>>a;
    if(a%4==0)
    {
    	cout<<a*a/16;
	}
	else
	{
		cout<<a/4*(a/4+1);
	}
	return 0; 
}
