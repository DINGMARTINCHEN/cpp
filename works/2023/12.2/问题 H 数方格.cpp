#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    long long sum=0;
    cin>>n>>m;
    if(n<m)
    {
        swap(n,m);
    }
    for (int i=m-1;i>=0;i--) 
    {
		sum+=(n-i)*(m-i);
	}
    cout<<sum;
}