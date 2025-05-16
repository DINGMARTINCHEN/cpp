#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long a,b,c,d,sum=0;
        cin>>a>>b>>c>>d;
        long long x=c;//Ç®
        long long y;//Ë®¹û
        while(x>0)
        {
            if(b==0)
            {
                x-=d;
            }
            else
            {
                b--;
            }
            x-=a;
            sum++;
        }
        cout<<sum-1<<endl;
    }
}