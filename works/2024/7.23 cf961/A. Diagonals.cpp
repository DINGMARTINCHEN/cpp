#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main() 
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,k;
        cin>>n>>k;
        int sum=0;
        if(k==0)
        {
            cout<<0<<endl;
        }
        else if(k>0&&k<=n)
        {
            cout<<1<<endl;
        }
        else
        {
            sum=1;
            k-=n;
            bool flag=1;
            for(int j=n-1;j>=1;j--)
            {
                if(flag==0)
                {
                    break;
                }
                for(int p=0;p<2;p++)
                {
                    if(flag==0)
                    {
                        break;
                    }
                    k-=j;
                    sum++;
                    if(k<=0)
                    {
                        cout<<sum<<endl;
                        flag=0;
                        break;
                    }
                }
                
            }
        }
    }
    return 0;
}