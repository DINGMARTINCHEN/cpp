#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,sum=0;
    cin>>n>>m;
    for(long long q=n;q;q--)
    {
        int j=q;
        for(int i=0;j>0;i++)
        {
            if(j%10==m)
            {
                sum++;
            }
            j=(j-j%10)/10;
        }
    }
    cout<<sum;
}