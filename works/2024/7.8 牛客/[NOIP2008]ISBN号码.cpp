#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int i=0;
    int k=0;
    int b[11];
    while(1)
    {
        if(a[i]=='-')
        {
            i++;
        }
        else
        {
            b[k]=int(a[i]-'0');
            // cout<<"b[k]:"<<b[k]<<endl;
            i++;
            k++;
        }
        if(k==9)
        {
            break;
        }
    }
    int sum=0;
    for(i=0;i<9;i++)
    {
        sum+=b[i]*(i+1);
        // cout<<"b[i]"<<b[i]<<"i+1"<<i+1<<endl;
    }
    
    // cout<<a.size();

    if(sum%11==int(a[12]-'0')||(sum%11==10&&a[12]=='X'))
    {
        cout<<"Right";
    }
    else
    {
        for(int i=0;i<12;i++)
        {
            cout<<a[i];
        }
        if(sum%11==10)
        {
            cout<<"X";
        }
        else
        {
            cout<<sum%11;
        }
    }
}
//https://ac.nowcoder.com/acm/contest/19304/W