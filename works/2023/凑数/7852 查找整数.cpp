#include <iostream>
using namespace std;
int main()
{
	int n,a[99999];
	cin>>n;
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i];
	}
	int m;
	cin>>m;
	for(int i=1;i<=n;i++)
    {
    	if(a[i]==m)
    	{
    		cout<<i;
    		return 0;
		}
	}
	cout<<"-1";
   return 0;
}
