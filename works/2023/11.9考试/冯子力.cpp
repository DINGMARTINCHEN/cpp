#include "iostream"
#include "iomanip"
#include "cmath"
using namespace std;
int main(){
	double a,b,c,n,l,u,v,all;
	long long x=0,y=0,z=0,m=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,o=0,p=0,q=0,r=0,s=0,t=0,w=0;
	cin>>x>>y>>z>>a>>b>>c>>m;
	n=(x*a*1.0+y*b*1.0+z*c*1.0)*0.85;//总数 
	l=m*1.0-n*1.0;//找零 
	l*=100;
	l=ceil(l);
	l/=100;
	u=l*10;
	v=l*100;
	s=floor(u);
	t=floor(v);
	w=floor(l);
	cout<<fixed<<setprecision(2)<<l<<endl;
	d=w/50;
	e=w%50/20;
	f=(w%50-e*20)/10;//10块 
	g=w%10/5;//5块 
	h=w%5/2;//2快 
	i=w%10-5*g-h*2;//一块 
	j=s%10/5;//5角 
	k=s%5/2;//2角 
	o=s%10-5*j-2*k;//1角 
	p=t%10/5;//5分 
	q=t%5/2;//2分 
	r=t%10-5*p-q*2;//1分 
	cout<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<" "<<i<<" "<<j<<" "<<k<<" "<<o<<" "<<p<<" "<<q<<" "<<r;
	return 0;
}
