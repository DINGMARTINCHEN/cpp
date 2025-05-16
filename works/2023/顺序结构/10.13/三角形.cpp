#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<fixed<<setprecision(4)<<sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a))/4;
	return 0; 
}
