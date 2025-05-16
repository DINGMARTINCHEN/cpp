#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std ;
int a[15] ,n,t=0;

bool place(int x){
	bool ok=true  ;
	for(int i=1;i<x;i++)
		if(a[x]==a[i] || x-i==fabs(a[x]-a[i]))   
		   {  ok=false;break;}	
	return ok ;
}
 
void search(int x){
	if(x==n+1) {
		t=1;
		for(int i=1;i<=n;i++) cout << a[i] <<" ";
		cout <<"\n" ;
	}
 
	else for(int i=1;i<=n;i++){
		a[x]=i;
		if(place(x))   search(x+1) ;
	}	
}
 
int main()
{
	cin >> n ;
	search(1) ;
	if(t==0) cout << "no solute!" ;
	return 0;
}