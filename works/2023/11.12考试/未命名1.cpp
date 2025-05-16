#include "iostream"
#include "cmath"
#include "iomanip"
using namespace std;
int main(){
	long long x,y,z;
	double a,b,c,m;
	cin>>x>>y>>z>>a>>b>>c>>m;
	cout<<fixed<<setprecision(2)<<(ceil(m-0.85*(a*x*1.0+b*y*1.0+c*z*1.0)*100))/100<<endl;
    long long d,e[12],i=9,f;
    d=ceil((m-0.85*(a*x*1.0+b*y*1.0+c*z*1.0))*100);
    while(d){
    f=d%10;
    e[i]=f/5;
    e[i+1]=f%5/2;
    e[i+2]=f%5%2;
    i=i-3;
    d=d/10;
	}
	for(int i=0;i<12;i++){
		cout<<e[i]<<" ";
	}
}
