#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double a[1000];
    double sumup=n;
    double sumdown=0; 
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sumdown+=(1.0/a[i]);
    }
    cout<<fixed<<setprecision(2)<<sumup/sumdown;
}