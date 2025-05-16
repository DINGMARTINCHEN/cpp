#include<bits/stdc++.h>
using namespace std;
int main()
{
    int peo,n,price;
    cin>>peo>>n>>price;
    if(peo%n==0)
    {
        cout<<price*(peo/n);
    }
    else
    {
        cout<<price * (peo / n + 1);
    }
}