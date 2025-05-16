#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	double x,y,z,a,b,c,all,m,zhao;
	int a50,a20,a10,a5,a2,a1,a55,a22,a11,a555,a222,a111;
	cin>>x>>y>>z>>a>>b>>c>>m;
	all=x*a+y*b+c*z;
	all*=0.85;
	zhao=m-all;
	zhao*=100;
	zhao=ceil(zhao);
	a50=floor(zhao/5000);
	a20=floor((zhao-a50*5000)/2000);
	a10=floor((zhao-a50*5000-a20*2000)/1000);
	a5=floor((zhao-a50*5000-a20*2000-a10*1000)/500);
	a2=floor((zhao-a50*5000-a20*2000-a10*1000-a5*500)/200);
	a1=floor((zhao-a50*5000-a20*2000-a10*1000-a5*500-a2*200)/100);
	a55=floor((zhao-a50*5000-a20*2000-a10*1000-a5*500-a2*200-a1*100)/50);//5½Ç 
	a22=floor((zhao-a50*5000-a20*2000-a10*1000-a5*500-a2*200-a1*100-a55*50)/20);//2½Ç
	a11=floor((zhao-a50*5000-a20*2000-a10*1000-a5*500-a2*200-a1*100-a55*50-a22*20)/10);//1½Ç
	a555=floor((zhao-a50*5000-a20*2000-a10*1000-a5*500-a2*200-a1*100-a55*50-a22*20-a11*10)/5) ;//5·Ö
	a222=floor((zhao-a50*5000-a20*2000-a10*1000-a5*500-a2*200-a1*100-a55*50-a22*20-a11*10-a555*5)/2);//2·Ö
	a111=zhao-a50*5000-a20*2000-a10*1000-a5*500-a2*200-a1*100-a55*50-a22*20-a11*10-a555*5-a222*2;//1·Ö 
	cout<<fixed<<setprecision(2)<<zhao/100.0<<endl<<a50<<" "<<a20<<" "<<a10<<" "<<a5<<" "<<a2<<" "<<a1<<" "<<a55<<" "<<a22<<" "<<a11<<" "<<a555<<" "<<a222<<" "<<a111;
 } 
