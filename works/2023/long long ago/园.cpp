#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
const double PI = acos(-1);
int main(){
	double a=0;
	cin>>a;
	cout<<fixed<<setprecision(4)<<2*a<<" "<<2*PI*a<<" "<<PI*a*a; 
	return 0;
}
