#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
int n,i,a,b=0;
cin>>n;
for(i=0;i<n;i++){
	cin>>a;
	if(a==1){
		b=b+1;
	}
}cout<<b;
return 0;
}
