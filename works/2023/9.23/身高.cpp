#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
double n,i,a,ming;
cin>>ming>>n;
for(i=0;i<n;i++){
	cin>>a;
	if(i==0){
		cout<<fixed<<setprecision(2)<<ming;
	}
	cout<<" "<<fixed<<setprecision(2)<<ming+a;
}
return 0;
}
