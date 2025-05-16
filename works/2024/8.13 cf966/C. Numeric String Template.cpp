#include <bits/stdc++.h>
using namespace std;
#define int long long
void s()
{
	int n;
	cin>>n;
	int a[n+5];
	memset(a,0,sizeof(a));
//	int sum=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
//		sum+=a[i];
	}
	int q;
	cin>>q;
	while(q--)
	{
		string s;
		cin>>s;
		if(s.length()!=n)
		{
			cout<<"NO\n";
			continue;
		}
		map<char,int> mp;
		map <int,char> mp1;
//		int num=0;
		int flag=0;
		for(int i=0;i<s.length();i++)
		{
			char ch=s[i];
			if(mp.find(ch)==mp.end() && mp1.find(a[i+1])==mp1.end())//没存过 
			{
				mp[ch]=a[i+1];
				mp1[a[i+1]]=ch; 
			}
			else
			{
				if(mp[ch]==a[i+1] && mp1[a[i+1]]==ch)//相互对应 
				{
					continue;
				}
				else
				{
					flag=1;
					break;
				}
			}
		}
		if(flag==0)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
	}
}
signed main()
{
	int t;
	cin>>t;
	while(t--)
	{
		s();
	}
	return 0;
}