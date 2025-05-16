#include <iostream>
using namespace std;
int main(){
	double n,m,i;
	cin>>n>>m;
	for(i=1;i<=m;i++){
		n<<=1;
	}
	cout<<n;
	return 0;
}

