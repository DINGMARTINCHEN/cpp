#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	
	int a=0,shi=0,feng=0,miao=0;
	cin>>a;
	miao=(a%3600)%60;
	feng=(a%3600)/60;
	shi=a/3600;
	cout<<setw(2)<<setfill('0')<<shi<<":"<<setw(2)<<setfill('0')<<feng<<":"<<setw(2)<<setfill('0')<<miao<<endl;
	}
	return 0;
}
