#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        int sum=0;
        cin>>a>>b;
        if(b%2==0)
        {
            sum=b/2;
            if(sum*7<a)
            {
                int d=(a-sum*7);
                if(d%15==0)
                {
                    sum+=d/15;
                }
                else
                {
                    sum+=d/15+1;
                }
                cout<<sum<<endl;
            }
            else
            {
                cout<<sum<<endl;
            }
        }
        else
        { 
            sum=1+b/2;
            if((sum-1)*7+11<a)
            {
                int d=(a-sum*7);
                if(d%15==0)
                {
                    sum+=d/15;
                }
                else
                {
                    sum+=d/15+1;
                }
                cout<<sum<<endl;
            }
            else
            {
                cout<<sum<<endl;
            }
        }
    }
}