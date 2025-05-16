#include <iostream>
using namespace std;
int main()
{
long long a,b;//aÎª¿í£¬bÎª¸ß 
char c;
cin>>a>>b>>c;
for(int i=1;i<=a;i++)
{
    cout<<c;
}
cout<<endl;
for(int j=2;j<b;j++)
{
	cout<<c;
	for(int i=2;i<a;i++){
		cout<<" ";
	} 
	cout<<c<<endl;
}
for(int i=1;i<=a;i++)
{
    cout<<c;
}
return 0;
}
