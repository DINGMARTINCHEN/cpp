#include<bits/stdc++.h>
using namespace std;
bool sushu(long long a)
{
    if(a<3)
    return false;
    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        return false;
    }
    return true;
}
int main()
{
    int n,k;
    cin>>n>>k;
    // cout<<pow(10,k-1)<<endl;
    int a[n];
    string z;
    getline(cin,z);
    getline(cin,z);
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        a[i]=z[i]-'0';
        sum*=10;
        sum+=a[i];
        if(i+1>=k)
        {
            sum-=a[i-k]*pow(10.0,k);
            // cout<<sum<<endl;
            if(sushu(sum)==true&&sum>=pow(10.0,k-1))//
            {
                cout<<sum;
                return 0;
            }
            // cout<<a[i-k]<<" "<<sum<<endl;
        }
    }
    cout<<"404";
}