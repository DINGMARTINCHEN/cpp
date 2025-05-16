#include <iostream>
using namespace std;
int main(){
char a,b,c;
cin>>a; 
	if(a<='v'&&a>='a') {
		cout<<char(a+4);
	}else if(a<='z'&&a>'v'){
		cout<<char(a-26+4);
	}else if(a<='Z'&&a>'V'){
		cout<<char(a-26+4);
	}else if(a<='V'&&a>='A') {
		cout<<char(a+4);
	}else{
		cout<<a;
	}
	return 0;
}
