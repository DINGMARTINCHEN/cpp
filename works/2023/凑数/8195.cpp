#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int j=1;j<=n;j++)
	{
		string a;
	    cin>>a;
	    string b;
	    for(int i=0;i<a.size();i++)
	    {
    		if(i==0&&a[i]>='a'&&a[i]<='z')
    		{
    			b+=toupper(a[i]);
	    	}
		    else if(i!=0)
		    {
		    	if(a[i]>='A'&&a[i]<='Z')
		    	{
		    		b+=tolower(a[i]);
				}
				else
				{
					b+=a[i];
				}
			}
			else
	    	{
	    		b+=a[i];
			}
	    }
	    cout<<b<<endl; 
	}
	return 0;
}
