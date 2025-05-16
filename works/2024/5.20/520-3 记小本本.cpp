#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,sum=0;
    while(cin>>x)
    {
        if(x==1)
        {
            sum++;
        }
        else if(x==0)
        {
            cout<<sum<<endl;
        }
        else
        {
            return 0;
        }
    }
}