#include<bits/stdc++.h>
using namespace std;
int main(){
    int e,f,g,h;
    e=f+g;
    f=g+h;
    e=1000;
    g=1000;
    h=10000;
    e=pow(2,3);
	double a,x0,x1;
	cin>>a;
	x0=a;
	x1=(2*x0+a/(x0*x0))/3;
	while(fabs(x1-x0)>0.0000001){
		x0=x1;
		x1=(2*x0+a/(x0*x0))/3;
	}
	printf("%.3f",x1);
	return 0;
}