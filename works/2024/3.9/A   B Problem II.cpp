#include<iostream>
#include<math.h>
#include<cstring>
#include <string>
// int take_turn(string a)
// {
//     string a1;
//     for(int i=a.size()-1;i>=0;i--)
//     {
//         a1[a.size()-i+1]=a[i];
//     }
//     return a1;
// }
// void process(string a,string b)
// {
//     string a1,b1,c;
//     for(int i=a.size()-1;i>=0;i--)
//     {
//         a1[a.size()-i+1]=a[i];
//     }
//     for(int i=b.size()-1;i>=0;i--)
//     {
//         b1[a.size()-i+1]=b[i];
//     }
//     int x=0;
//     for(int i=0;i<max(a.size(),b.size())-1;i++)
//     {
//         int temp=int(a[i]-'0')+int(b[i]-'0')+x+'0';
//         c[i]=char(temp%10)+'0';
//         x=temp/10;
//     }
//     if(c[c.size()-1]!='0')
//     {
//         cout<<c[c.size()-1]; 
//     }
//     for(int i=c.size()-2;i>=0;i--)
//     {
//         cout<<c[i];
//     }
// }
using namespace std;
int main()
{
    int t;
    cin>>t;
    string a[t],b[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(int j=0;j<t;j++)
    {
        cout<<"Case "<<j+1<<":"<<endl<<a[j]<<" + "<<b[j]<<" = ";
        // process(a[i],b[i]);
        string a1,b1,c;
        for(int i=a[j].size()-1;i>=0;i--)
        {
            a1[a[j].size()-i+1]=a[j][i];
        }
        for(int i=b[j].size()-1;i>=0;i--)
        {
            b1[a[j].size()-i+1]=b[j][i];
        }
        int x=0;
        for(int i=0;i<max(a[j].size(),b[j].size())-1;i++)
        {
            int temp=int(a[j][i]-'0')+int(b[j][i]-'0')+x+'0';
            c[i]=char(temp%10);
            x=temp/10;
        }
        if(c[c.size()-1]!='0')
        {
            cout<<c[c.size()-1]; 
        }
        for(int i=c.size()-2;i>=0;i--)
        {
            cout<<c[i];
        }
        cout<<endl<<endl;
    }
}