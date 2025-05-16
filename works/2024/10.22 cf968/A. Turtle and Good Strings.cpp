#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() 
{
    int n;
    cin>>n;
    while(n--)
    {
        string a;
        int n;
        cin>>n;
        cin>>a;
        if(a[0]==a[n-1])
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES";
        }
        cout<<endl;
    }
    return 0;
}
/*

4

2
aa

3
aba
4
abcb
12
abcabcabcabc


*/