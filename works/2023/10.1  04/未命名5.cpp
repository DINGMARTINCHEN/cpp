#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int n;
	double a,sum=0,b;
	cin>>n;
	for(int i =1;i<=n;i++){
		cin>>a;
		sum=a+sum;
	}
	b=sum/n;
	cout<<fixed<<setprecision(2)<<b;
	return 0;
}
