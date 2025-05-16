#include <iostream>
using namespace std;
int main(){
	int a,b=0,i;
    cin>>a;
    for(i=0;i<a;i++){
    	if(i%3==0&&i%5!=0&&i%7==0){
    		b=b+i;
		}
	}
	cout<<b;
	return 0;
}
