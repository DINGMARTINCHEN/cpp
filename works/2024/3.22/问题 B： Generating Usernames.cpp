#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        for(int j=0;j<m;j++)
        {
            string a;
            cin>>a;
            if(j==0)
            {
                cout<<a;
            }
            else if(j==1)
            {
                cout<<a[0]<<a[1]<<"_";
            }
            else
            {
                cout<<a[0];
            }
        }
        cout<<endl;
    }
}