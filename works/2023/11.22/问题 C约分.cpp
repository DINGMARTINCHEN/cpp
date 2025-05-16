#include<iostream>
#include <cmath>
using namespace std;
int measure(int x, int y)
{	
	int z = y;
	while(x%y!=0)
	{
		z = x%y;
		x = y;
		y = z;	
	}
	return z;
}
int main()
{
    int n,a,b;
    char z;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>z>>b;
        cout<<a/(measure(a,b))<<'/'<<b/(measure(a,b))<<endl;
    }
    return 0;
}