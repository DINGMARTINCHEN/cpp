#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  getline(cin,s);
  for(int i = 0 ; i <= s.size() ;i ++)
     if(isupper(s[i]))s[i]=s[i]+32; 
       else if(islower(s[i]))s[i]=s[i]-32;
        else s[i]=s[i];
  cout<<s;
  return 0;
	
}

