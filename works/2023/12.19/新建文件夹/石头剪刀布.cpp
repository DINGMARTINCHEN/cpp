#include <iostream>
using namespace std;
int main(){
	char a,b;
	cin>>a>>b;
	if(a=='R' && b=='P'||a=='P' && b=='S'||a=='S' && b=='R'){
		cout<<"loss";
	} else if(a==b){
		cout<<"draw";
	}else if(b=='R'&&a=='P'||b=='P'&&a=='S'||b=='S'&&a=='R'){
		cout<<"win";
	}
	return 0;
}
