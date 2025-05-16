#include<bits/stdc++.h>
using namespace std;
int n,r,t,j=0;
int a[1001],q[1001];
int main()
{   cin>>n>>r;
    if(r==0)
    {   cout<<"0";
        return 0;
    }
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
    {   j++;
        if(j>r) j=1;
        q[j]+=a[i];
        t+=q[j];
    }
    cout<<t;
    return 0;
}

