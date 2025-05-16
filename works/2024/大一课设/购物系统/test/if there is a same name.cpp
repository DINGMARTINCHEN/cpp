#include<bits/stdc++.h>
using namespace std;
int string_to_int(string a)
{
    int num=0;
    int base=1;
    for(int i=a.size()-1;i>=0;i--)
    {
        int aa=int(a[i]-'0');
        num+=(aa*base);
        base*=10;
    }
}
int main()
{
    int a=string_to_int("123456");
    cout<<a;
}