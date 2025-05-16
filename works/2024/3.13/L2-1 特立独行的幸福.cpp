#include<bits/stdc++.h>
using namespace std;
bool sushu(int n)
{
	n=abs(n);
	if(n==1||n==0)
	{
		return false;
		return 0;
	}
	if(n==2)
	{
		return true;
		return 0;
	}
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return false;
			return 0;
		}
	}
	return true;
	return 0;
}
bool lucky(int n)
{
    int sum=0;
    while(n)
    {
        sum+=n%10;
        n=(n-n%10)/10;
    }
    if(sum==1)
    {
        return true;
    }
    lucky(sum);
}
int main()
{
    int start,end;
    cin>>start>>end;
    for(int i=start;i<=end;i++)
    {
        int plus=1;
        if(sushu(i))
        {
            plus=2;
        }
        if(lucky(i))
        {
            cout<<i<<" ";
        }
    }
}