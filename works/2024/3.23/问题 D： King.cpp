#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        int c,d;
        if(a%3==0)
        {
            c=a/3;
        }
        else
        {
            c=a/3+1;
        }
        if(b%3==0)
        {
            d=b/3;
        }
        else
        {
            d=b/3+1;
        }
        cout<<c*d<<endl;
    }
}