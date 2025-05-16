#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double a,b,c,h;
	cin>>h;
	a=h;
	for(int i=1;i<=10;i++){
		b=b+2*a;
		a=a/2;
		if(i==10){
			c=a;
		}
	}
	cout<<fixed<<setprecision(3)<<b-h<<endl<<fixed<<setprecision(3)<<c;
	return 0;
}
