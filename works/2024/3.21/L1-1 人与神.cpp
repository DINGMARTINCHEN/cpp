#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	string a;
	getline(cin,a);
	int flag=m;
	for(int i=1;i<=n;i++)
	{
		getline(cin,a);
		if(flag>m)
		{
			if(strstr(a,"easy")&&find(a.begin(),a.end(),"qiandao"))
		    {
	    		flag++;
	    	}
		    else
	    	{
	    		cout<<a;
	    		return 0;
		    }
		}
	}
	cout<<"Wo AK le";
}
