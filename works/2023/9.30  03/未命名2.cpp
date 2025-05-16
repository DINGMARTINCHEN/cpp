#include <iostream>
using namespace std;
int main(){
	int sum=0,n;
	for (int i=0;;i++){
		cin>>n;
		if(n==0){
			break;
		}else{
			sum=sum+n;
		}
	}
	cout<<sum;
	return 0;
}
