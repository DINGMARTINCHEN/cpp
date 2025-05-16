#include<stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
int i,j,a;
  for (i=1;i<=9;i++)
    {
        for(j=1;j<=i;j++)
        {
		    if(i==9&&j==9)
			{
			    cout<<j<<"*"<<i<<"="<<std::left<<setw(4)<<j*i; 
			}
			else{
				cout<<j<<"*"<<i<<"="<<std::left<<setw(4)<<j*i<<" ";
			}
	}
	cout<<endl;
}
return 0;
}
