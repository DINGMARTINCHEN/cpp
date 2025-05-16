#include <iostream>
using namespace std;
int main(){
	int n,a,i;
cin>>n;
a=n;
for(i=0;a>1;i++){
		if (n%2==0){
		a=n/2;
	}else{
		a=3*n+1;
	}
	cout<<a;
}

	return 0;
}
