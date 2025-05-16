#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	string a, b;
	getline(cin, a);
	for (int i = 0; i < a[i]; i++)
	{
		if (a[i] >= 'x' && a[i] <= 'z')
		{
			a[i] -= 23;
		}
		else if (a[i] >= 'X' && a[i] <= 'Z')
		{
			a[i] -= 23;
		}
		else
		{
			a[i] += 3;
		}
	}
	for (int i = 0; i < a[i] / 2; i++)
	{
          swap(a[i], a[a.size() - 1 - i]);
	}
	cout << a;
	return 0;
}
