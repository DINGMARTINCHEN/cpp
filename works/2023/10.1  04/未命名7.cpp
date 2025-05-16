#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
	long long n,m,sum=0;
	cin>>n>>m;
	if(n>m){
		swap(n,m);
	}
	for(int i=n;i<=m;i++){
		if(i%2!=0){
			sum=sum+i;
		}
	}
	cout<<sum;
	return 0;
}
