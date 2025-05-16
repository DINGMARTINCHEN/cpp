#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int n,pre;
    // cin>>n>>pre;
    // int sum=1;
    // for(int i=1;i<n;i++)
    // {
    //     int a;
    //     cin>>a;
    //     if(a>=pre)
    //     {
    //         sum++;
    //     }
    //     pre=a;
    // }
    // cout<<sum;
    int a;
    int pre;
    cin>>pre;
    int sum=1;
    while(cin>>a)
    {
        if(a>=pre)
        {
            sum++;
        }
        pre=a;
    }
    cout<<sum;
}