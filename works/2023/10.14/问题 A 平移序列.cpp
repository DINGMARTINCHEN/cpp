#include<iostream>
using namespace std;
 int main()
 {
 	int a[9999],n;
 	cin>>n;
 	for(int i=0;i<n;i++)
 	{
 		cin>>a[i];
	 }
	 for(int i=1;i<n;i++)
	 {
	 	cout<<a[i]<<" ";
	 }
	 cout<<a[0];
	 return 0;
 }
