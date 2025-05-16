#include <iostream>
using namespace std;
int main(){
int a,b;
cin>>a;
if(a%3==0){
	b=a/3;
}else{

	b=a/3+1;}
	if(a>12||a<=0){
		cout<<"Input Error";
	}else{
	
	switch(b){
case 1:cout<<"Spring";break;
case 2:cout<<"Summer";break;
case 3:cout<<"Autumn";break;
case 4:cout<<"Winter";break;
}}
	return 0;
} 
