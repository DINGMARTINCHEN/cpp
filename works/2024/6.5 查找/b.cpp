#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int N=2e7+50;

int n;
unordered_map<ull,int> h;
int base=27;
ull mod=1<<31;
ull ans;
int main()
{
	cin>>n;
	while(n--)
	{
		ans=0;
		string s,t;
		cin>>s;
		getchar();
		getline(cin,t);
		for(int i=0;i<t.size();i++)
			ans=(ans*base+(ull)(t[i]-'a'))%mod;
		if(s=="add") h[ans]=1;
		else
		{
			if(h[ans]==1) cout<<"yes\n";
			else cout<<"no\n";
		}
	}
}