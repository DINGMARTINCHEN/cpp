#include <iostream>  
#include <iomanip>  
using namespace std;  
int main(){  
   int n,a,b;  
   float sum=0;  
   double f[999]={0};  
	f[1]=f[2]=1;  
	f[3]=2;  
	cin>>n;  
   for(int i=3;i<=n+2;i++)  
   {  
   	f[i]=f[i-1]+f[i-2];  
	sum=sum+f[i]/f[i-1];   
   }  
   cout<<fixed<<setprecision(2)<<sum;  
	return 0;  
}
