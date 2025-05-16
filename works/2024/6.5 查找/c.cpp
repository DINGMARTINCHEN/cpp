#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int N=2e6+50;

char a[N];
ull p[N],h[N];
int len;
int base=128;

ull get(int l,int r)
{
	return h[r]-h[l-1]*p[r-l+1];
}

int f(int x)
{
	for(int i=x*2;i<=len;i+=x)
	{
		if(get(i-x+1,i)!=h[x]) return false;
	}
	return true;
}

int main()
{
	while(1)
	{
		scanf("%s",a+1);
		len=strlen(a+1);
		if(a[1]=='.' && len==1) break;
		p[0]=1;h[0]=0;
		for(int i=1;i<=len;i++)
		{
			h[i]=h[i-1]*base+a[i]-'a'+1;
			p[i]=p[i-1]*base;
		}
		for(int i=1;i<=len;i++)
		{
			if(len%i==0 && f(i))
			{
				cout<<len/i<<'\n';
				break;
			}
		}
	}
}