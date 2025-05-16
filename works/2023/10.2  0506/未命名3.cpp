#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double a,b,f;
	int n,c=1,d,e;
	cin>>a>>b>>n;
	for(int i=1;i<=n;i++){
		c=c*10;
	} 
	f=a/b;
	d=c*f;
	e=d%10;
	cout<<e;
	return 0;
}
