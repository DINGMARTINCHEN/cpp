#include <iostream>
using namespace std;
int main(){
	int a,i,b,c=0;
	cin>>a;
	b=a;
	for(i=0;b>=0;i++){	
		if(b%2==0){
			c=c+1;
		}
		b=b>>1;
	}
	cout<<c;
	return 0;
}
