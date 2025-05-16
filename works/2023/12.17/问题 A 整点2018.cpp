#include<iostream>
using namespace std;
int main()
{
    long long n,a[9999],sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=1;j<=a[i];j++)
        {
            for(int z=0;z<=a[i];z++)
            {
                if(z*z+j*j<=a[i]*a[i])
                {
                    sum++;
                }
            }
        }
        cout<<(sum)*4<<endl;
    }
}