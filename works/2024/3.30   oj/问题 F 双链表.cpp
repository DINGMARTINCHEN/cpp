#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int v[N],l[N],r[N],idx;
void init()
{
	r[0]=1;
	l[1]=0;
	idx=2; 
 } 
void insert(int k,int x)
{
	v[idx]=x;
	r[idx]=r[k];
	l[idx]=k;
	l[r[k]]=idx;
	r[k]=idx;
	idx++;
 } 
void remove(int k)
{
	r[l[k]]=r[k];
	l[r[k]]=l[k];
}
int main()
{
	init();
	int M,k,x;
	string op;
	cin>>M;
	while(M--)
	{
		cin>>op;
		if(op=="L")
		{
			cin>>x;
			insert(0,x);
		}
		else if(op=="R")
		{
			cin>>x;
			insert(l[1],x);
		}
		else if(op=="D")
		{
			cin>>k;
			remove(k+1);
		}
		else if(op=="IL")
		{
			cin>>k>>x;
			insert(l[k+1],x);
		}
		else {
			cin>>k>>x;
			insert(k+1,x);
		}
	}
	int pos=r[0];
	while(pos!=1)
	{
		cout<<v[pos]<<" ";
		pos=r[pos];
	}
	return 0;
}