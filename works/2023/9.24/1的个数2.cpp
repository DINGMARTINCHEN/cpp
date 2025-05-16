#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a;
	b=0;
	while(a>0){
		if(a&1){
			b=b+1;
		}
		a>>=1;
	}
	cout<<b;
	return 0;
} 
