#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],c[n+m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        c[i]=a[i];
    }
    for(int i=n;i<n+m;i++)
    {
        cin>>c[i];
    }
    sort(c,c+m+n);
    for(int i=0;i<m+n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j]==c[i])
            { 
                for(int q=0;q<n;q++)
                {
                    if(a[q]==c[i+1]&&q!=j)
                    {
                        cout<<"Yes";
                        return 0;
                    }
                }
            }
        }
    }
    cout<<"No";
}