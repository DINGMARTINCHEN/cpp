#include <iostream>
using namespace std;
int main(){
int n,t=0,i=1,j;
cin>>n;
n=n*100;
for(i=1;i<=n/5;i++){
	for(j=1;j<=n/2;j++){
		if(i*5+2*j<n)
		t++;
	}
}cout<<t<<endl;
	return 0;
}
