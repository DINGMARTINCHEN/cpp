#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double a,b;
	cin>>a>>b;
	cout<<fixed<<setprecision(3)<<(100*b)/a<<"%";
	return 0;
}
