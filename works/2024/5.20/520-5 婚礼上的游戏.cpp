#include<bits/stdc++.h>
using namespace std;
int sum[999999];
int main()
{
    int n;
    cin>>n;
    int a;
    int maxgap=0;
    memset(sum,0,sizeof(sum));
    for(int i=0;i<n;i++)
    {
        cin>>a;
        sum[abs(a-300)]++;
        if(maxgap<abs(a-300))
        {
            maxgap=abs(a-300);
        }
    }
    for(int i=0;i<=maxgap+1;i++)
    {
        if(sum[i]!=0)
        {
            cout<<sum[i];
            return 0;
        }
    }
}