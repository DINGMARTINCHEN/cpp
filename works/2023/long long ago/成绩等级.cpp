#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int weight=0;
	cin>>weight;
    if(weight>=90){
		cout<<"A";		
	}
	if(weight>=80 && weight<90){
		cout<<"B";
	}
	if(weight>=70 && weight<80){
		cout<<"C"; 
	}
	if(weight>=60 && weight<70){
		cout<<"D"; 
	}
    if(weight<60){
		cout<<"E";
	}return 0;
}
