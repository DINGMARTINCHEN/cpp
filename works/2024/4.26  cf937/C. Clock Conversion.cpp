#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int h,m;
        char z;
        cin>>h>>z>>m;
        if(h==0)
        {
            cout<<"12:";
        }
        else if(h<=12&&h!=0)
        {
            cout<<setw(2)<<setfill('0')<<h<<":";
        }
        else
        {
            cout<<setw(2)<<setfill('0')<<h-12<<":";
        }
        cout<<setw(2)<<setfill('0')<<m<<" ";
        if(h>=12)
        {
            cout<<"PM"<<endl;
        }
        else{
            cout<<"AM"<<endl;
        }
    }
}