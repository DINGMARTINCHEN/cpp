#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a%2!=0)
        {
            sum1++;
        }
    }
    cout<<sum1<<" "<<n-sum1;
}