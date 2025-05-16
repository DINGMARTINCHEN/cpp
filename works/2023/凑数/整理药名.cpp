#include<bits/stdc++.h>
using namespace std;
int main()
{  
   int n;
   cin>>n;
   char s[n][20];
   int i;
   for(i = 0 ; i <= n-1; i++)
       {
       		cin>>s[i];
	   }
	   
	 for(i = 0 ; i <= n-1; i++)
       {    int j,m=strlen(s[i]);
            int f=0;
       		for(j = 0 ;j <m ;j++)
       		   {
       		   	if(isalpha(s[i][j])&&f==0&&j==0)
       		   		{f=1;
       		   		 s[i][j]=toupper(s[i][j]);
       		   		 
					}
				 else if(!isalpha(s[i][j])&&f==0&&j==0)
				     f=1;
       		   	  else if(isalpha(s[i][j])&&f==1)
       		   	  	{
       		   	  		s[i][j]=tolower(s[i][j]);	
					}
				  }
			cout<<s[i]<<endl;
	   }
	return 0;
}

