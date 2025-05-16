#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double weight=0,price=0;
	cin>>weight;
if(weight<=30){

	if(weight<=10){
		price=0.8;
		cout<<weight*price+0.2;		
	}
	if(weight>10 && weight<=20){
		price=0.75;
		cout<<8+(weight-10)*price+0.2;
	}
	if(weight>20 && weight<=30){
		price=0.7;
		cout<<15.5+(weight-20)*price+0.2; 
	}

	}else{
		cout<<"Fail";
	}return 0;
}
