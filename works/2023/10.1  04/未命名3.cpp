#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	for(int i=15;i<=127;i++){
		cout<<std::right<<setw(4)<<i<<":"<<(char)i;
		if((i-14)%10==0){
			cout<<endl;
		}
	}
	return 0;
}
