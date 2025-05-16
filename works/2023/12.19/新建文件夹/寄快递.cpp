#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double weight=0;
	cin>>weight;
	if(weight<=15){
		cout<<fixed<<setprecision(1)<<weight*6;
	}else{
		cout<<fixed<<setprecision(1)<<9*(weight-15)+90;
	}
	return 0;
}
