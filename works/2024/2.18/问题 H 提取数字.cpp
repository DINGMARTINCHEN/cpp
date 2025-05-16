#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string a;
    cin>>n>>a;
    int sum=0,all=0;
    bool flag=false;
    a+='a';
    for(int i=0;i<a.size();i++)
    {
        if(a[i]<='9'&&a[i]>='0')
        {
            sum=sum*10+(a[i]-'0');
            flag=true;
        }
        else
        {
            if(flag=true)
            {
                all=all+sum+5;
                sum=0;
                flag=false;
            }
        }
    }
    cout<<all;
}