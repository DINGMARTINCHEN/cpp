#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int sum=0;
    if(a.size()>3&&a[0]=='6')
    {
        for(int j=0;j<a.size();j++)
        {
            if(a[j]=='6')
            {
                sum++;
            }
        }
    }
    if(sum>3&&sum<=9)
    {
        cout<<9;
    }
    else if(sum>9)
    {
        cout<<27;
    }
    else
    {
        cout<<a;    
    }
    while(cin>>a)
    {
        sum=0;
        if(a.size()>3&&a[0]=='6')
        {
            for(int j=0;j<a.size();j++)
            {
                if(a[j]=='6')
                {
                    sum++;
                }
            }
        }
        if(sum>3&&sum<=9)
        {
            cout<<" "<<9;
        }
        else if(sum>9)
        {
            cout<<" "<<27;
        }
        else
        {
            cout<<" "<<a;    
        }
    }
}