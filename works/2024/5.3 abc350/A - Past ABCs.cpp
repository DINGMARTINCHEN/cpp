#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    string b=a.substr(3);
    int c=stoi(b);
    if(1<=c&&c<=349&&c!=316)
    {
		cout<<"Yes"<<endl;
	} 
    else 
    {
		cout<<"No"<<endl;
	}
}