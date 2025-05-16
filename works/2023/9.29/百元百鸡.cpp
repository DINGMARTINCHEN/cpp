#include <iostream>
using namespace std;
int main(){
//	int a=5,c=1,
int a1,b1,c1;
//	double b=1/3; 
	for(a1=0;a1<=100;a1++){
		for(b1=0;b1<=100;b1++){
		    for(c1=0;c1<=100;c1++){
		    	if(a1+b1+c1==100&&a1*5+b1*3+c1/3==100&&c1%3==0){
		    		cout<<a1<<" "<<b1<<" "<<c1<<endl;
				}
		
	}
	    }
		
	}
	return 0;
}
