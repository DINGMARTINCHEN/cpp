#include <iostream>
using namespace std;
int main(){
	int a,b,c,dig;
	cin>>a>>b>>c;
	if(a>b){
		dig=a;
		a=b;
		b=dig;
	}else if(a>c){
		dig=a;
		a=c;
		c=dig;
	}else if(b>c){
		dig=b;
		b=c;
		c=dig;
	}cout<<a<<" "<<b<<" "<<c;
	return 0;
}
