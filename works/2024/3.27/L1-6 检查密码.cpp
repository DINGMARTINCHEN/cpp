#include<bits/stdc++.h>
using namespace std;
bool banned(string a)
{
    for(int j=0;j<a.size();j++)
    {
        if((a[j]<='9'&&a[j]>='0')||a[j]=='.'||(a[j]<='z'&&a[j]>='a')||(a[j]<='Z'&&a[j]>='A'))
        {
            continue;
        }
        else
        {
            // cout<<"Your password is tai luan le."<<endl;
            return false;
            return 0;
        }
    }
    return true;
}
bool number(string a)
{
    for(int i=0;i<a.size();i++)
    {
        if(a[i]<='9'&&a[i]>='0')
        {
            return true;
            return 0;
        }
    }
    return false;
}
bool character(string a)
{
    for(int i=0;i<a.size();i++)
    {
        if((a[i]<='z'&&a[i]>='a')||(a[i]<='Z'&&a[i]>='A'))
        {
            return true;
            return 0;
        }
        return false;
    }
}
int main()
{
    int n;
    cin>>n;
    string a;
    getline(cin,a);
    for(int i=0;i<n;i++)
    {
        bool flag=true;
        getline(cin,a);
        if(a.size()<6)
        {
            cout<<"Your password is tai duan le."<<endl;
            // break;
            flag=false;
        }
        else{
            if(banned(a)==false)
            {
                cout<<"Your password is tai luan le."<<endl;
                // break;
            flag=false;
            }
            else if(character(a)==false&&number(a)==true)
            {
                cout<<"Your password needs zi mu."<<endl;
                // break;
            flag=false;
            }
            else if(character(a)==true&&number(a)==false)
            {
                cout<<"Your password needs shu zi."<<endl;
                // break;
            flag=false;
            }
        }
        if(flag==true)
        cout<<"Your password is wan mei."<<endl;
    }
}

// 71828182845904523536028747135266249775724709369995957496696762772407663035354759457138217852516642