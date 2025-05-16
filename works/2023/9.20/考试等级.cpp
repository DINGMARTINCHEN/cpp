#include "iostream"
using namespace std;
int main(){
	int a,b;
	cin>>a;
    b=a/10;
    switch(b){
    	case 9: case 10:cout<<"A";break;
		case 8: cout<<"B";break;
		case 7: cout<<"C";break;
		case 6: cout<<"D";break;
		default: cout<<"E";break; 
	}
	return 0;
}
