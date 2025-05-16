#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	cout<<n<<" "; 
	for(int i=1;n>2;i++){
		if(n%2==0){
			n=n/2;
		}
		else{
			n=n*3+1;
		}
		cout<<n<<" ";
	} 
	cout<<1<<endl;
	return 0;
}
