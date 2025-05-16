#include <iostream>
using namespace std;
int main()
{
	int n, a, b, a1, b1;
	cin >> n >> a >> b;
	if(n % a ==0||  n % b==0)
	{
		cout<<0;
		return 0;
	}
	
	if (a - n % a < b - n % b)
	{
		cout << a - n % a;
	}
	else
	{
		cout << b - n % b;
	}
	return 0;
}
