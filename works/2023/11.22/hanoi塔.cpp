#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
void Hanoi(int n,char a,char b,char c)
{
	if(n==1)
	{
		cout<<a<<"->"<<c<<":"<<n<<endl;
	}
	else
	{
		Hanoi(n-1,a,c,b);
    	cout<<a<<"->"<<c<<":"<<n<<endl;
	    Hanoi(n-1,b,a,c);
	}
}
int main()
{
	int n;
	cin>>n;
	Hanoi(n,'A','B','C');
	return 0;
}