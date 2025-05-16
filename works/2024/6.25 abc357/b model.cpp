#include <bits/stdc++.h>
using namespace std;
string s;
int c1,c2;
int main() {
	cin>>s;
	for (auto &x:s) {
		if (x>='A'&&x<='Z') c1++;
		else c2++;
	}
	if (c1<c2) {
		for (auto &x:s) {
			if (x>='A'&&x<='Z') x+=32;
		}
	} else {

		for (auto &x:s) {
			if (x>='a'&&x<='z') x-=32;
		}
	}
	cout<<s<<"\n";
}