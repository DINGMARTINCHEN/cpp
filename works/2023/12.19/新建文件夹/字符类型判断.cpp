#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
      char a;
      cin>>a;
      if(a>='A'&&a<='Z'){
      	cout<<"upper";
	  }else if(a<='z'&&a>='a'){
	  	cout<<"lower";
	  }else if(a<='9'&&a>='0'){
	  	cout<<"digit";
	  }else{
	  	cout<<"other";
	  }
	return 0;
}
