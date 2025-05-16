#include<bits/stdc++.h>
using namespace std;
int top;
bool f;
int main(){
	string s; 
	char a[3000];
	cin>>s;
	int l=s.size(),n,m;
	for(int i=0;i<l;i++){
		if(s[i]=='('||s[i]==')')n++;
		if(s[i]=='['||s[i]==']')m++;
		if(s[i]=='('||s[i]=='[')a[++top]=s[i];
        if(s[i]==')'){
            if(a[top]=='(')top--;
            else{
                f=1;
                break;
            }
        }
        if(s[i]==']'){
            if(a[top]=='[')top--;
        	else{
                f=1;
                break;
            }
        }
    }
    if(n%2==1||m%2==1){
        cout<<"Wrong";
       	return 0;
	}
    if(f==1)cout<<"Wrong";
    else cout<<"OK";
	return 0;
}
