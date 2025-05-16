#include<bits/stdc++.h>
using namespace std;
bool judge(int a)
{
    if(a%7==0)
    {
        return false;
        return 0;
    }
    while(a!=0)
    {
        if(a%10==7)
        {
            return false;
            return 0;
        }
        a=(a-a%10)/10;
    }
    return true;
}
void process(int a,int b,int c)
{
    b++;
    while(c!=0)
    {
        if(judge(b)==true)
        {
            cout<<b;
        }
        else
        {
            cout<<"p";
        }
        if(c!=1)
        {
            cout<<" ";
        }
        c--;
        b+=a;
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        // cout<<endl<<"iiii"<<i;
        process(a,b,c);
    }
}