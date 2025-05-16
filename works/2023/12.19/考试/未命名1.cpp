#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b;
   if(a*b<0){
   	c=abs(b-a);
   	cout<<(c-1)*12;
   }else{
   	cout<<abs(b-a)*12;
   }
    return 0;
}
