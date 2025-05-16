#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int tentor (int n, int r) {
	if (n == 0) {
		return 0;
	}
	if (n < 0) {
		n = -n;
		cout << '-';
	}
	int y;
	y = n % r;
	tentor(n / r, r);
	if (y < 10) {
		cout << y;
	} else {
		y = y - 10 + 'a';
		cout << char(y);
	}

}

int main() {
	int n, r;
	cin >> n >> r;
	if (n == 0) {
		cout << 0;
		return 0;
	}
	tentor(n, r);
}
