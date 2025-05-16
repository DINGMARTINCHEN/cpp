#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    int sum1=0,sum2=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='(')
        {
            sum1++;
        }
        if(a[i]==')')
        {
            sum2++;
        }
        if(a[i]==')'&&sum1==0)
        {
            cout<<"NO";
            return 0;
        }
        if(sum2>sum1)
        {
            cout<<"NO";
            return 0;
        }
    }
    if(sum1==sum2)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
//))()