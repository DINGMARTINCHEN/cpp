#include <iostream>
using namespace std;
int main(){
   int i,a,b,c,d,e;
   for(i=100;i<100000;i++){
      c=i/100%10;
      d=i/10%10;
      e=i%10;
      if(c*c*c+d*d*d+e*e*e==i){
          cout<<i<<endl;
      }}
	  return 0;
}
