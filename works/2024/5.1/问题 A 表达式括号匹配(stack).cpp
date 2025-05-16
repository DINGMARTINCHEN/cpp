#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int sum=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='(')
        {
            sum++;
        }
        else if(a[i]==')')
        {
            if(sum<=0)
            {
                cout<<"NO";
                return 0;
            }
            else 
            {
                sum--;
            }
        }
    }
    if(sum==0)
    {
        cout<<"YES";
    }
    else 
    {
        cout<<"NO";
    }
    return 0;
}