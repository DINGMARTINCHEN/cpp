#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
int n,i,a,max=0;
cin>>n;
for(i=0;i<n;i++){
	cin>>a;
	if(a%2==0){
		if(a>max){
			max=a;
		}
	}
	}
cout<<max;
return 0;
}
