#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[4];
    for(int i=1;i<=4;i++)
    {
        cin>>a[i];
    }
  	sort(a+1,a+5);
  	if(a[1]==a[2] && a[3]==a[4])
    	cout<<2<<endl;
  	else{
    	if(a[1]==a[2] || a[2]==a[3] || a[3]==a[4])
      		cout<<1<<endl;
    	else
      		cout<<0<<endl;
  	}
  	return 0;
}