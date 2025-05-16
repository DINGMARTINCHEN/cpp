#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,a1,b1,c1,d1,e1,f1;
    cin>>a>>b>>c>>d>>e>>f>>a1>>b1>>c1>>d1>>e1>>f1;
    if((min(d,d1)-max(a,a1)>0)&&(min(e,e1)-max(b,b1)>0)&&(min(f,f1)-max(c,c1)>0))
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}