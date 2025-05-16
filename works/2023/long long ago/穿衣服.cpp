#include <iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	if(a>7||a<=0){cout<<"error";}
	switch(a){
		case 1:cout<<"orange";break;
		case 2:cout<<"yellow";break;
		case 3:cout<<"green";break;
		case 4:cout<<"indigo";break;
		case 5:cout<<"blue";break;
		case 6:cout<<"violet";break;
		case 7:cout<<"red";break;
		}
		return 0;
}
