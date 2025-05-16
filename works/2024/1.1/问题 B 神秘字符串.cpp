#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    long long q1=1,q2=1;
    for(int i=0;i<a.size();i++)
    {
        q1*=int(a[i]-'A'+1);
        q1=q1%47;
    }
    for(int i=0;i<b.size();i++)
    {
        q2*=int(b[i]-'A'+1);
        q2=q2%47;
    }
    if(q1==q2)
    {
        cout<<"GO";
    }
    else
    {
        cout<<"STAY";
    }
}