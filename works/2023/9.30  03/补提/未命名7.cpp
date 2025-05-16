#include <iostream>
using namespace std;
int main()
{
	 long long f[101];
	 int a;
	 f[1]=f[2]=f[3]=1;
	 for( int i=4;i<=a;i++)
	 {
	 	f[i]=f[i-1]+f[i-3];
	 }
	 for (int i=1;i<=a;i++)
	 {
	 	cout<<f[i]<<" ";
	 }
	return 0;
}
