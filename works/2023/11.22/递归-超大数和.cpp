#include <iostream>
using namespace std;
int cnt=1;
int sumup(char *a,char *b,int z)
{
    cnt=1;
    sum=int(a[i]+b[i]-2*'0');
    if(sum>9)
    {
        cout<<sum-10;
        a[i+1]++;
    }
    else
    {
        cout<<sum;
    }
    sumup(a,b,z--);
    if(z==1)
    {
        return 0;
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    char a[n],b[m];
    int z;
    z=max(m,n);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=m;i++)
    {
        cin>>b[i];
    }
    sumup(a,b,z);
}