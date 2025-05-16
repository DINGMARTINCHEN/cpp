#include <bits/stdc++.h>
#define int long long
using namespace std;

void dsc()
{
    string s;cin>>s;
	int n=s.size();
	int ans=stoll(s);
	string tmp=s;
	for(int i=0;i<n;i++)
    {
		tmp.erase(0,1);
		tmp+=s[i];
		int num=stoll(tmp);
		ans=min(ans,num);
	}
	cout<<ans<<endl;
}

signed main() 
{
    int n;
    cin>>n;
    while(n--)
    {
        dsc();
    }
    return 0;
}