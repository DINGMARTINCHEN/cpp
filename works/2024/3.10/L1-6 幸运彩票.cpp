#include<string>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++)
    {
        string a;
        cin>>a;
        for(int j=0;j<a.size();j++)
        {
            if(a[0]+a[1]+a[2]==a[3]+a[4]+a[5])
            {
                b[i]=1;
            }
            else
            {
                b[i]=0;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(b[i]==1)
        {
            cout<<"You are lucky!";
        }
        else
        {
            cout<<"Wish you good luck.";
        }
        if(i<n-1)
        {
            cout<<endl;
        }
    }
}