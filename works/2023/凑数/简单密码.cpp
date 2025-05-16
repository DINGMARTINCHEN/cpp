#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  getline(cin,s);
  for(int i = 0 ; i <= s.size() ;i ++)
    {
    	if(s[i]>='A'&&s[i]<='E')s[i]=s[i]+21;
    	   else if(s[i]>='F'&&s[i]<='Z')s[i]=s[i]-5;
    	      else s[i]=s[i];
	}
	cout<<s;
	return 0; 
}
 //A 65   v
 //Z 90  V 86   90-4
 //a 65  v 86  151
 //b 66  w 87  153
