#include <iostream>
using namespace std;
int main()
{
	int a[9999],sum=0,k=1;
	cin>>a[1];
	for(int i=2;;i++)
	{
		cin>>a[i];
		k++;
		if(a[i]==0)
		{
			break;
		}
	}
//	for(int i=1;i<=k;i++)
//	{
//		cout<<a[i];
//	}
	for(int j=0;j<k;j++){
		for(int i=j+1;i<k;i++){
			if(2*a[j]==a[i]||2*a[i]==a[j]){
				sum++;
			}
		}
	}
	cout<<sum;
	return 0;
}
