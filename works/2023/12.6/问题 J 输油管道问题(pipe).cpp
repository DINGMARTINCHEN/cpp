#include <bits/stdc++.h>
using namespace std;

int main(){
	int z,n,a[1000],i,j,t;
	double v;
	cin >> n;
	for(i = 0 ; i < n ; i++){
		cin>>z >> a[i];
	}
	
	for(i = 1 ; i < n ; i++){
		for(j = 0 ; j <= n - i - j ; j++){
			if(a[j] > a[j + 1]){
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	
	if(n % 2 != 0){
		v = a[n / 2];
	}else{
		v = (a[n / 2] + a[n / 2 - 1]) / 2.0;
	}
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int x=a[i]-v;
        sum+=abs(x);
    }
    cout<<sum;
}
