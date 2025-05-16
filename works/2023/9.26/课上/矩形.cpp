#include <iostream>
using namespace std;
int main(){
	int m,n,i,j;
	char a;
	cin>>n>>m>>a;
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++)
		{
			if(i==1||j==1||i==m||j==n)
			{
				cout<<a;
			}
			else
			{
				cout<<" ";
			}
		}
		if(i!=m)
		{
			cout<<endl;
		}
	}
	return 0;
}
 
