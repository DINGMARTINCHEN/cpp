#include <iostream>
using namespace std;
int main(){
	long long n,sum=0,a=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		a=a+i;
		sum=i*a-i;
		cout<<sum<<" ";
	}
	return 0;
} 
