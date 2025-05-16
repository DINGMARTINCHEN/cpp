#include<bits/stdc++.h>
using namespace std;
    long long direction[100001];
    string name[100001];
int main()
{
    long long n,m;
    cin>>n>>m;
    for(long long i=0;i<n;i++)
    {
        cin>>direction[i]>>name[i];
        if(direction[i]==0)
        {
            direction[i]=1;
        }
        else
        {
            direction[i]=-1;
        }
    }
    long long sum=0;
    for(long long i=0;i<m;i++)
    {
        long long face,num;
        cin>>face;
        cin>>num;
        num%=n;
        if(face==0)
        {
            num*=-1;
        }
        num*=direction[sum];
        // cout<<"direction[sum]"<<direction[sum]<<" sum "<<sum<<endl;
        sum+=num;
        if(sum<0)
        {
            sum=n+sum;
        }
        sum%=n;
        // cout<<" sum "<<sum<<endl;
    }
    cout<<name[sum];
}