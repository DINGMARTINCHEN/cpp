#include <iostream>
using namespace std;
int main(){
	int a=0,bai=0,shi=0,ge=0;
	cin>>a;
	bai=a/100;
	shi=a%100/10;
	ge=a%10;
	cout<<shi+ge+bai;
	return 0;
}
