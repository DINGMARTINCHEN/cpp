#include <iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	if(a%4==0&&a%100!=0||a%400==0){
		cout<<366;
	}else{
		cout<<365;
	}
	return 0;
}
