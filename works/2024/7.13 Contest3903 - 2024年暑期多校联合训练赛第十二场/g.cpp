#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int sum=0;
    for(int i=0;i<a.size();i++)
    {
        int x=a.find('x');
        if(x==string::npos)
        {
            break;
        }
        int l=a.find('l',x);
        if(l==string::npos)
        {
            break;
        }
        int s=a.find('s',l);
        if(s==string::npos)
        {
            break;
        }
        sum++;
        a[x]='0';
        a[l]='0';
        a[s]='0';
    }
    cout<<sum;
}