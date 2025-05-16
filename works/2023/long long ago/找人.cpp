#include <iostream>
using namespace std;
int main(){
	int year1,year2,year3,month1,month2,month3,day1,day2,day3;
	cin>>year1>>month1>>day1>>year2>>month2>>day2>>year3>>month3>>day3;
	if(365*year3+31*month3+day3<=365*year2+31*month2+day2&&365*year1+31*month1+day1<=365*year3+31*month3+day3){
		cout<<"Yes"; 
	} else{
		cout<<"No";
	}return 0;
}
