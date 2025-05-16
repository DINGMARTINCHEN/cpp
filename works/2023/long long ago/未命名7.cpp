#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int a;
	char b;
	cin>>a>>b;
	if(a<=18){
		if(b=='M'){
			cout<<"Boy";
		}
		else{
			cout<<"Girl";
		}
	}
	if (a>18){
	if(b=='M'){
				cout<<"Man";
			}else{
				cout<<"Woman";
			}}
return 0;
}
