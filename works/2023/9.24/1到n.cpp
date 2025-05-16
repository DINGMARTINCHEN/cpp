#include <iostream>
using namespace std;
int main(){
	int a,i,n;
	cin>>n;
	for(i=1;i<=n;i++){
		if(i%10==0){
		cout<<i<<endl;
		}
		else{
			cout<<i<<" ";
		}
	}
	return 0;
}
