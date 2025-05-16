#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
    {
        int n,k,x;
        cin>>n>>k>>x;
        if(n%(k+1)==0)
        {
            a[i]=n/(k+1)*x*k;
        }
        else
        {
            a[i]=n/(k+1)*x*k+n%(k+1)*x;
        }
    }
    for(int i=0;i<t;i++)
    {
        cout<<a[i]<<endl;
    }
}