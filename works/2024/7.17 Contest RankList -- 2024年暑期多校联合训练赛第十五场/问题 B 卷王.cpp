#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main() 
{
    int n;
    cin>>n;
    int flag=0;
    double sum=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a>=60)
        {
            sum+=a;
            flag++;
        }
    }
    if(flag==0)
    {
        cout<<"0.000";
        return 0;
    }
    cout<<fixed<<setprecision(3)<<sum*1.0/flag;
    return 0;
}