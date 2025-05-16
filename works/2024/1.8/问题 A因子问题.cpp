#include<bits/stdc++.h>
using namespace std;
// int gcd(int a,int b)
// {
// 	if(a%b==0)
// 		return b;
// 	else
// 		return gcd(b,a%b);
// }
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=2;i<n;i++)
    {
        if(n%i==0&&n%(m-i)==0)
        {
            cout<<i;
            return 0;
        }
    }
    cout<<-1;
}