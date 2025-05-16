#include <iostream>
using namespace std;
int main(){
	int a;
	char b;
	cin>>a>>b;
	if(b=='y'){
		if(a<=1000){
			cout<<8+5;
		}else if(a>1000){
			if(a%500==0){cout<<8+5+((a-1000)/500)*4;
			}else
			cout<<8+5+((a-1000)/500+1)*4; 
		}
	}else if(a<=1000){
			cout<<8;
		}else if(a>1000){
			if(a%500==0){
				cout<<8+((a-1000)/500)*4;
			}else
			cout<<8+((a-1000)/500+1)*4; 
		}
		return 0;
}
