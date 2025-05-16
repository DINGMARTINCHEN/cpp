#include <iostream>
using namespace std;
int main(){
int n,cat,dog,ans=0,i;
cin>>n>>cat>>dog;
for(i=1;i<=n/cat;i++){
	if(cat*i<n&&(n-cat*i)%dog==0){
		ans++;
	}
}
cout<<ans<<endl;
	return 0;
}
