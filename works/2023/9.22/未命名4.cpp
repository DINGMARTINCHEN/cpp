#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int n,i;
	double a=0,f=0,b=0;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>f>>b;
		a=f*b/10+a;
	}
	cout<<fixed<<setprecision(2)<<a;
	return 0;
}
