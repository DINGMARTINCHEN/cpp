#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    if(int(a[0])<=int('9')&&int(a[0])>=int('0'))
    {
        cout<<"no";
        return 0;
    }
    for(int i=1;i<a.size();i++)
    {        
        if((int(a[i])<=int('z')&&int(a[i])>=int('a'))||(int(a[i])<=int('Z')&&int(a[i])>=int('A'))||a[i]=='_'||(int(a[i])<=int('9')&&int(a[i])>=int('0')))
        {
            continue;
        }
        else{
            cout<<"no";
            return 0;
        }
    }
    cout<<"yes";
}