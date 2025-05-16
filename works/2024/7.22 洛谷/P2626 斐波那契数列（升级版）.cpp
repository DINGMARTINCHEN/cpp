#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
const ll N=1<<31;

int main() 
{
    
    int n;
    cin>>n;
    ll a=1,b=1,c;
    for(int i=2;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    int s=c%N;
    cout<<s<<"=";
    for(int i=2;i<=s;i++)
    {
		if(s%i==0)
        {
			cout<<i;
			s/=i;
			if(s!=1) cout<<"*";
			i=1;
		}
	} 
    return 0;
}