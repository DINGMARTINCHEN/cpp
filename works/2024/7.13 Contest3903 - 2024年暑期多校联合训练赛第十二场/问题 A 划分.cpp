#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        unsigned long long m,n,d;
        cin>>n>>m>>d;
        // if(m-d>=n-1)
        if((m%n==0&&m/n>=d)||(m%n!=0&&m/n+1>=d))
        {
            cout<<"Yes"<<endl;

        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
// 8 99 90