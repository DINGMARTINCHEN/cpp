#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    a=abs(a);
    b=abs(b);
	if(a%b==0)
		return b;
	else
		return gcd(b,a%b);
}
int main()
{
    int n;
    cin>>n;
    int a[999];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            break;
        }
        for(int j=i+1;j<n;j++)
        {
            if(a[j]==0)
        {
            break;
        }
            if(gcd(a[i],a[j])==1&&i!=j)
            {
                sum++;
            }
        }
    }
    cout<<sum;
}