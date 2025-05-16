#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
	int n;
	long long sum=0;
	cin>>n;
	for(int i =1;i<=n;i++){
	    sum=pow(i,2)+sum;
	}
	cout<<sum;
	return 0;
}
