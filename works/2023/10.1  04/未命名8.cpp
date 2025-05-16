#include <iostream>
using namespace std;
int main(){
   long long n,a,max=-9999999999,min=99999999999;
   cin>>n;
   for(int i=1;i<=n;i++){
   	    cin>>a;
   	    if(a>max){
   	    	max=a;
		   }
		if(a<min){
		   	min=a;
		   }
   }
   cout<<max-min;
	  return 0;
}
