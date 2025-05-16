#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int N=1e6+50;

int k;
char a[N],s[N];
ull h[N];
ull base=123;
ull hs;
ull power=1;
int main()
{
	cin>>a>>s;
	int la=strlen(a);
	int ls=strlen(s);
	for(int i=0;i<ls;i++)
	{
		hs=hs*base+(ull)(s[i]);
		power*=base;
	}
	h[0]=a[0];
	for(int i=1;i<la;i++)
		h[i]=h[i-1]*base+(ull)(a[i]);
	for(int i=ls-1;i<la;i++)
	{
		if(i-ls<0 && h[i]==hs) k++;
		else if(h[i]-h[i-ls]*power==hs)
			k++;
	}
	cout<<k;
}