#include <iostream>
using namespace std;
int main(){
	int a=0,b=0;
	cin>>a;
	b=100*(a%10)+10*(a%100/10)+a/100;
	cout<<b;
	return 0;
}
