#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
const double PI = acos(-1);
int main(){
	double a;
	cin>>a;
	cout<<fixed<<setprecision(2)<<(4.0/3)*PI*a*a*a;
}
