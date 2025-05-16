#include <iostream>
using namespace std;
int main() {
	int n, a[99][99], e = 0, max = -32768,x,y;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}                                              
	for (int i = 0; i < n; i++) {
		max=-32768;
		for (int j = 0; j < n; j++) {
			if(max<a[i][j])
			{
				max=a[i][j];
				
			}
		}
	}
	cout << min;
	return 0;
}


