#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
int main()
{
	int a[9999],n;
	cin>>n;
	gets(a); 
	for (int i = 0; i < n - 1; i++)
	{
        for (int j = 0; j < n - i - 1; j++)
	    {
            if (a[j] > a[j + 1]) 
			{
                swap(a[j],a[j+1]);
            }
        }
    }
} 

