#include<bits/stdc++.h>
using namespace std;
long long a[999999]={0};
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int z;
        cin>>z;
        a[z]++;
    }
    int sum=0;
    for(long long i=0;i<=30000;i++)
    {
        if(a[i]!=0)
        {
            sum++;
        }
        if(sum==k)

        {
            cout<<i;
            return 0;
        }
    }
    cout<<"NO RESULT";
}