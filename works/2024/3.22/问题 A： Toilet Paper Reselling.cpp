#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a<=100)
        {
            cout<<a*4<<endl;
        }
        else
        {
            cout<<500-a<<endl;
        }
    }
}