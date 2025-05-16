#include <bits/stdc++.h>
using namespace std;
map<int,int> B;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int A;
		cin>>A;
		if(B[A])
			cout<<B[A]<<endl;
		else
			cout<<-1<<endl;
		B[A]=i;
	}
	return 0;
}