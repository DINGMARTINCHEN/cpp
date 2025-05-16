#include <iostream>
using namespace std;
int main(){
	int sum=0,a;
	for (int i=1;i<=100;i++){
		cin>>a;
		if(a==0){
			break;
		}
		sum=sum+a;
	}
	cout<<sum;
	return 0;
}
