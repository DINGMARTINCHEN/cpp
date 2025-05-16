#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,m;
    cin>>n>>m>>k;
    int nn=1,mm=1;
    while(k!=0)
    {
        // cout<<"nn->"<<nn<<" mm->"<<mm<<"   ";
        if(nn%n==0&&mm%m!=0)
        {
            cout<<n<<" "<<mm%m;
        }
        else if(nn%n!=0&&mm%m==0)
        {
            cout<<nn%n<<" "<<m;
        }
        else if(nn%n==0&&mm%m==0)
        {
            cout<<n<<" "<<m;
        }
        else{
            cout<<nn%n<<" "<<mm%m;
        }
        nn++;
        mm++;
        k--;
        if(k>=1)
        {
            cout<<endl;
        }
    }
}