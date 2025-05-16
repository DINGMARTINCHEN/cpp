#include<bits/stdc++.h>
using namespace std;
bool compare(string a,string b)
{
    if(a<b)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string c[9999];
    int a,b;
    cin>>a>>b;
    for(int i=0;i<a;i++)
    {
        cin>>c[i];
    }
    sort(c,c+a,compare);
    for(int i=0;i<a;i++)
    {
        cout<<c[i]<<endl;
    }
}