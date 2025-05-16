#include<iostream>
using namespace std;
main()
{
	int n,m,i,j,a[100],b[20],s=0,t,num;
	cin>>n>>m;
	for(i=0;i<n;i++)
	    cin>>a[i];
	for(i=0;i<m;i++)
	    cin>>b[i];
	for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(a[i]>a[j])
            {
            	t=a[i];a[i]=a[j];a[j]=t;
			}
			
	for(i=0;i<m-1;i++)
        for(j=i+1;j<m;j++)
            if(b[i]>b[j])
            {
            	t=b[i];b[i]=b[j];b[j]=t;
			}
	j=0;
	for(i=0;i<m;i++)
	{
		num=0;
		for(;j<n;j++)
		    if(b[i]>=a[j]&&num!=2)
		    	num++;
		s=s+num;
		j=s;    
	}
	cout<<s;
}
