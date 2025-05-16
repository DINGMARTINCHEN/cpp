#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main() 
{
    int sum=0,b[100];
    string a;
    cin>>a;
    for(int i=0;i<a.size();i++)
    {
        b[int(a[i])]=i;
    }
    for(int i=int('A'+1);i<=int('Z');i++)
    {
        sum+=abs(b[i]-b[i-1]);
    }
    cout<<sum;
    return 0;
}