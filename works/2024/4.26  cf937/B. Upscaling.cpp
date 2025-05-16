#include<bits/stdc++.h>
using namespace std;
bool print(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i+j)%2==0)
            {
                cout<<"##";
            }
            else
            {
                cout<<"..";
            }
        }
        cout<<endl;
        for(int j=0;j<n;j++)
        {
            if((i+j)%2==0)
            {
                cout<<"##";
            }
            else
            {
                cout<<"..";
            }
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        print(a);
    }
}