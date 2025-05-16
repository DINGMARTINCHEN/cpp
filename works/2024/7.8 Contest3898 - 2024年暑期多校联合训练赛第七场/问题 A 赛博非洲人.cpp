#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double a[n];
    double suma=0,sumb=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        suma+=a[i];
    }
    double b[n];
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        sumb+=b[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        double fb=b[i]/sumb,fa=a[i]/suma;
        // cout<<fb<<"---"<<fa<<endl;
        if(fb>fa)
        {
            cout<<'?';
            return 0;
        }
        if(fb<fa)
        {
            cout<<'!';
            return 0;
        }
    }
    cout<<'.';
}