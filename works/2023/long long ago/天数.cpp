#include <iostream>
using namespace std;
int main(){
	int ye,first,month,day,all,a;
	cin>>ye>>month
switch(month){
	case 1:all=day;break;
	case 2:all=day+31;break;
	case 3:if(ye%4==0&&ye%100!=0||ye%400==0){all=day+31+29;}//»ÚƒÍ 
	       else{all=day+31+28;}break;
    case 4:if(ye%4==0&&ye%100!=0||ye%400==0){all=day+31+31+29;}
	       else{all=day+31+31+28;}break;
	case 5:if(ye%4==0&&ye%100!=0||ye%400==0){all=day+31+29+31+30;}
	       else{all=day+31+28+31+30;}break;
	case 6:if(ye%4==0&&ye%100!=0||ye%400==0){all=day+31+29+31+30+31;}
	       else{all=day+31+28+31+30+31;}break;
	case 7:if(ye%4==0&&ye%100!=0||ye%400==0){all=day+31+29+31+30+31+30;}
	       else{all=day+31+28+31+30+31+30+day;}break;
    case 8:if(ye%4==0&&ye%100!=0||ye%400==0){all=day+31+29+31+30+31+30+31;}
	       else{all=day+31+28+31+30+31+30+31;}break;
	case 9:if(ye%4==0&&ye%100!=0||ye%400==0){all=day+31+29+31+30+31+30+31+31;}
	       else{all=day+31+28+31+30+31+30+31+31;}break;
	case 10:if(ye%4==0&&ye%100!=0||ye%400==0){all=day+31+29+31+30+31+30+31+31+30;}
	       else{all=day+31+28+31+30+31+30+31+31+30;}break;
	case 11:if(ye%4==0&&ye%100!=0||ye%400==0){all=day+31+29+31+30+31+30+31+31+30+31;}
	       else{all=day+3+1+28+31+30+31+30+31+31+30+31;}break;
	case 12:if(ye%4==0&&ye%100!=0||ye%400==0){all=day+31+29+31+30+31+30+31+31+30+31+30;}
	       else{all=day+31+28+31+30+31+30+31+31+30+31+30;}break;
}
if((all)%7-1==0){
	cout<<7;
}else{
cout<<(all)%7-1;}
	return 0;
}
	
