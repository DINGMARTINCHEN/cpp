#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
int n,i,a,max=0,ou=0;
cin>>n;
for(i=0;i<n;i++){
	cin>>a;
	if(a%2!=0){
		if(a>max){
			max=a;
		}
	}else{
		if(a>ou){
			ou=a;
		}
	}
	}
cout<<"Ou king="<<ou<<endl<<"Ji queen="<<max;
return 0;
}
