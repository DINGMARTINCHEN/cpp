#include <iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	if(a+b>=10){
		if(a>b){
			cout<<"tree";
		}else{
			cout<<"tea";
		}
	}else{
		cout<<"water";
	}
	return 0;
}
