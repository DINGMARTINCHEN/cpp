#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  char c,cc;
  cin>>s;
  cin>>c>>cc; 
  for(int i = 0 ; i <= s.size() ;i ++)
    {
    	if(s[i]==c)s[i]=cc;
	}
  cout<<s;
  return 0;
 } 
