#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int gcd(int a, int b) 
{
  if (b == 0) return a;
  return gcd(b, a % b);
}

void find(int a)
{
    for(int i=1;i<a;i++)
    {
        int c=a^i;
        if(gcd(i,a)==c)
        {
            cout<<i<<endl;
            return ;
        }
    }
    cout<<-1;
}

int main() 
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        find(a);
    }
    return 0;
}