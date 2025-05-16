#include<iostream>
#include<map>
#include<stack>
using namespace std;

int main(){
	int n,m,k;
	cin>>n>>m>>k;
	while(k--){
		int t=1,flag=0,x;
		stack<int> st;
		for(int i=1; i<=n; i++){
			cin>>x;
			if(x==t){
				t++;
				while(!st.empty()&&st.top()==t){
					st.pop();
					t++;
				}
			}else{
				st.push(x);
				if(st.size()>m) flag=1;
			}
		}
		if(!st.empty()||flag) cout<<"NO"<<endl;
		else cout<<"YES"<<endl; 
	} 
	return 0;
}
