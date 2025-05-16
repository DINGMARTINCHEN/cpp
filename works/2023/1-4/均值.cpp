#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
	double a=0,b=0,c=0,d=0,e=0,f=0;
	cin>>a>>b>>c>>d>>e;
	f=(a+b+c+d+e)/5;
	cout<<fixed<<setprecision(5)<<f<<endl<<fixed<<setprecision(5)<<((a-f)*(a-f)+(b-f)*(b-f)+(c-f)*(c-f)+(d-f)*(d-f)+(e-f)*(e-f))/5;
	return 0; 
} 
