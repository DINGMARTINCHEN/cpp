#include <iostream>
using namespace std;
long long a[1000002];
int main()
{
    long long n;
    cin>>n;
    a[1]=a[2]=1;
    for(int i=3;i<=n;i++)
    {
    	a[i]=a[i-1]+a[i-2];
	}
	cout<<a[n]%10007;
   return 0;
}
