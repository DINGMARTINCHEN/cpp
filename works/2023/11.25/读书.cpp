#include <iostream>
using namespace std;
int main()
{
	long long n,t,i=0;
    cin>>n>>t;
    long long int a[n+2];
    for(i=0;i<n;i++)cin>>a[i];
    int sum=0;
    while(t>0)
    {
        t=t-(86400-a[sum]);
        sum++;
    }
    cout<<sum;
}
/*vocal听不懂



他在搞什么
*/