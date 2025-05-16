#include<bits/stdc++.h>
using namespace std;
string s;
vector<int>num;
int main(void)
{
	cin>>s; 
	int sum=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!='+')  
		{
			sum=sum*10+s[i]-'0';
		}
		else
		{
			num.push_back(sum);
			sum=0;
		}
	}
	num.push_back(sum);
	sort(num.begin(),num.end());
	for(int i=0;i<num.size();i++)
	{
		if(i) cout<<"+";
		cout<<num[i];
	}
	return 0;
}
