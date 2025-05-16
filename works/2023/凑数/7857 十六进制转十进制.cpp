#include <iostream>
#include<iomanip>
#include <cstring>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int sum=0;
	string a;
	for(int j=0;j<n;j++)
	{
		getline(cin,a);
		for(int i=0;i<a.size();i++)
	    {
	    	if(a[i]<='9'&&a[i]>='0')
		    {
			    sum=sum*16+int (a[i]-'0');
	    	}
	    	if(a[i]<='F'&&a[i]>='A')
		    {
		    	sum=sum*16+int (a[i]-'A')+10;
	    	}
    	}
    	cout<<uppercase<<oct<<sum;
    	sum=0;
	}
	return 0;
}
