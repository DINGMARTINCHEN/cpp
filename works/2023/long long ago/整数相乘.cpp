#include <iostream>
using namespace std;
int main(){
	long long a,b,c=1000;
	cin>>a>>b;
	cout<<(a%c+b%c)%c<<endl<<(12345678%c*a%c)%c;
	return 0;
}
