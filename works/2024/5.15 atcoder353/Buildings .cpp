#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(i>=2&&a[i]>a[1])
        {
            cout<<i;
            return 0;
        }
    }
    cout<<-1;
}