#include <cmath>
#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b){
		if(a>c){
			cout<<a;
		} else{
			cout<<c;
		}
	}else{
		cout<<b;
	}
return 0;
}
