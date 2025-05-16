#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	long long int a,b,c=1,i;
	cin>>a>>b;
	for(i=0;i<b;i++)
	{
		c*=a;
		c%=7;
	}
	if(c==0){
		cout<<"Sunday";
	}
	else if(c==1){
		cout<<"Monday";
	}
	else if(c==2){
		cout<<"Tuesday";
	}
	else if(c==3){
		cout<<"Wednesday";
	}
	else if(c==6){
		cout<<"Saturday";
	}
	else if(c==4){
		cout<<"Thursday";
	}
	else if(c==5){
		cout<<"Friday";
	}
}
