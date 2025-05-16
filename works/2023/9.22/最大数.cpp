#include <iostream>
using namespace std;
int main(){
	int n,i;
	cin>>n; 
int j=0;
	for(int i=n;i>=1;i--){
		cout<<i<<" ";
		j++;
		if(j%10==0){
			cout<<endl;
		}
	}

	return 0;
}
