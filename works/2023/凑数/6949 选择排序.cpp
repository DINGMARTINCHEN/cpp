#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n,a[9999];
	cin>>n;
	int j;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		int t=0,s=0;
		t=a[i];
		for( j=i+1;j<=n;j++)
		{
			if(t>a[j])
			{
				s=j;
				t=a[j];
	        }
		}
		swap(a[j],a[i]);
		cout<<"swap(a["<<i-1<<"], a["<<s<<"]):";
	    for(int i=1;i<=n;i++)
        {
	        cout<<a[i]<<" ";
	    }
	    if(i!=n)
		{
			cout<<endl;
		}
	}
	return 0;
 } 
