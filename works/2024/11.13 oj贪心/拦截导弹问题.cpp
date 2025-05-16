#include<iostream> 
using namespace std;
const int N=10007;
int a[N],l[N];
int main()
{
    int n=1,k=1,p;
    while(cin>>a[n]) n++;
    l[k]=a[1];
    for(int i=2;i<=n;i++)
    {
    	p=0;
    	for(int j=1;j<=k;j++)
    	{
    		if(l[j]>=a[i]){
    			if(p==0) p=j;
    			else if(l[p]>l[j])
    			    p=j;
			}
		}
		if(p==0)
		{
			k++;
			l[k]=a[i];
		}
		else l[p]=a[i];
	}
	cout<<k<<endl;
	return 0;
 } 
