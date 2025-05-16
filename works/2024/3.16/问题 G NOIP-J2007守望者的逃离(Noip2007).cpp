#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,s,t;
    cin>>m>>s>>t;
    int a=s,b=t;
    while(t>-1)
    {
        if(m>10)
        {
            m-=10;
            s-=60;
        }
        else
        {
            m+=4;
            s-=17;
        }
        t--;
        if(t==0&&s>0)
        {
            cout<<"No"<<endl<<a-s;
            return 0;
        }
        if(s==0&&t>0)
        {
            cout<<"Yes"<<endl<<b-t;
            return 0;
        }
    }
}