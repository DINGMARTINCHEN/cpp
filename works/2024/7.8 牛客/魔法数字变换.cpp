#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    while(n!=1)
    {
        if(n%2==0)
        {
            n/=2;
        }
        else
        {
            n=n*3+1;
        }
        sum++;
    }
    cout<<sum;
}
//https://ac.nowcoder.com/acm/contest/19305/1041