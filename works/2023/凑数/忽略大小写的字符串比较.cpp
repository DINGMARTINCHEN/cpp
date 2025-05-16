#include<bits/stdc++.h>
using namespace std;
int main()
{int i;
  string s1,s2;
  getline(cin,s1);
  getline(cin,s2);
  
  //cout<<s1<<endl<<s2<<endl;
  int n,m;
  n=s1.size();
  m=s2.size();
  char s11[n],s22[m];
  
  //cout<<s11<<endl<<s22; 
  
  int p=0;
  
  for(i = 0 ; i < n ;i ++)
  	if(isupper(s1[i]))s11[p++]=s1[i];
  	  else if(islower(s1[i]))s11[p++]=s1[i]-32;
  	     else s11[p++]=s1[i];
  	 s11[p]=0; 
  
  	int k=0;
  for( i = 0 ; i < m ;i ++)
  	if(isupper(s2[i]))s22[k++]=s2[i];
  	  else if(islower(s2[i]))s22[k++]=s2[i]-32;
  	  	else s22[k++]=s2[i];
  	  s22[k]=0; 
	 	//cout<<s11<<endl<<s22<<endl;
	if(strcmp(s11,s22)==0)
   	cout<<"=";
   	else if(strcmp(s11,s22)>0)
   	    cout<<">";
   	 else cout<<"<";
	return 0;	     
}

