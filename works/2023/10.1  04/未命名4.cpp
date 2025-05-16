#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	long long f[61]={0};
	f[1]=f[2]=1;
	f[3]=2;
	cout<<1<<" "<<1<<" "<<2<<" ";
	for(int i=4;i<=60;i++){
		f[i]=f[i-1]+f[i-2];
		if(i!=60)
		{
		if(i%4==0){
			cout<<f[i]<<" "<<endl;
		}else{
		    cout<<f[i]<<" ";
		}
		}
		else{
			cout<<f[i]<<endl;
		}
	}
	return 0;
}
