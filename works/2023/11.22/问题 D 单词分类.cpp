#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,c[30]={0},d=0;
    cin>>n;
    char b[30];
    for(int i='A';i<26+'A';i++)
    {
        b[i]=char(i);
    }
    string a;
    getline(cin,a);
    for(int i=0;i<n;i++)
    {
        getline(cin,a);
        a[0]=toupper(a[0]);
        d=int(a[0]);
        c[d]++;
    }
    for(int i=int('A');i<=26+int('A');i++)
    {
        if(c[i]!=0)
        {
            cout<<b[i];
            cout<<" "<<c[i]<<endl;
        }
    }
    return 0;
}
