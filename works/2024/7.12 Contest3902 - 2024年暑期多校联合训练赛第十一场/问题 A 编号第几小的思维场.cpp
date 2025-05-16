#include<bits/stdc++.h>
using namespace std;
void process(int n)
{
    // int n;
    // cin>>n;
    if(n<4)
    {
        cout<<1;
        return ;
    }
    int r=n/4;
    if(r%2==0)
    {
        if(r<6)
        {
            cout<<r+1;
        }
        else
        {
            cout<<(r-6)/2+1;
        }
    }
    else
    {
        if(r<6)
        {
            cout<<r+1;
        }
        if(r>6)
        {
            cout<<(r-7)/2+1;
        }
    }
}
int main()
{
    // for(int i=0;i<84;i++)
    // {
    int i;
    cin>>i;
        process(i);
    //     cout<<"----"<<i;
    //     cout<<endl;
    // }
}