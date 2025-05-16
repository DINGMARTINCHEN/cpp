#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int j=0;j<n;j++)
    {
        // int a,b,c;
        // cin>>a>>b>>c;
        // int sum+=(a+b+c);
        // int minn=min(min(a,b),c);
        // int maxn=max(max(a,b),c);
        // int miun=sum-maxn-minn;
        int a[3];
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<5;i++)
        {
            sort(a,a+3);
            a[0]++;
        }
        int q=1;
        for(int i=0;i<3;i++)
        {
            q*=a[i];
        }
        cout<<q<<endl;
    }
}