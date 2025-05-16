#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int n=0;n<=a;n++){
    int b=n/3;
    if(n%3==0)
    {
        cout<<pow(3,b);
    }
    else if(n%3==1)
    {
        cout<<pow(3,b-1)*4;
    }
    else
    {
        cout<<pow(3,b)*2;
    }
    cout<<endl;
    }
}