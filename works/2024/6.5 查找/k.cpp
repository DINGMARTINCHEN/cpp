#include <bits/stdc++.h>

using namespace std;

typedef long long ll; 
const int N=2e7+50;

int main()
{
	map<string,string> a;
	int n,nc;
	string s;
	cin>>n>>nc>>s;
	for(int i=0;i+n-1<s.size();i++)
	{
		string b=s.substr(i,n);
		a[b]=b;
	}
	cout<<a.size();
}