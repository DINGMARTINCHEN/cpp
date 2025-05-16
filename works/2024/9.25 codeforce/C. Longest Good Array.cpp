#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

void process()
{
    int l,r;
    cin>>l>>r;
    int num=r-l;
    if(num==0)
    {
        cout<<1<<endl;
        return ;
    }
    int  tmp=(int)sqrt(num*2)-2;
    while(tmp*(tmp+1)/2<=num)
    {
        tmp++;
    }
    cout<<tmp<<endl;
}

signed main() 
{
    int n;
    cin>>n;
    while(n--)
    {
        process();
    }
    return 0;
}