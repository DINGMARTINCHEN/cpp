#include <iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
if(b==2){
	if(a%4==0&&a%100!=0||a%400==0)
	{
		cout<<29;
	}else{
		cout<<28;
	}
	}
if(b==1||b==3||b==5||b==7||b==8||b==10||b==12){
	cout<<31;
}
if(b==11||b==4||b==6||b==9){
	cout<<30;
}
	return 0;
}
	
