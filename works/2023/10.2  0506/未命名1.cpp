#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	for(int i=1;i<=10;i++){
		cout<<i<<":area="<<fixed<<setprecision(2)<<3.14*i*i<<endl;
		if(3.14*i*i>=100){
			break;
		}
	}
	return 0;
}
