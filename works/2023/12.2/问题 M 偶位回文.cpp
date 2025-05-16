#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,sum1=0;
    cin>>n;
    for(int i=n;i>0;i--)
    {
        long long z=i,y=i,s=1,sum=0;
        while(z>0)
        {
            z/=10;
            s*=10;
        }
        long long  x=i*s;
        for(int j=0;y;j++)
        {
            sum=sum*10+y%10;
            y=(y-y%10)/10;
        //     b*=10; 
		// b=b+a%10;
        // a=(a-a%10)/10;
        }
        sum1=sum+x+sum1;
        // cout<<sum<<" "<<x<<endl;
    }
    cout<<sum1;
}