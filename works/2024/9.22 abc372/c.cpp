#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

void process(string a,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(i>n-1)
        {
            break;
        }
        if(a[i]=='A'&&a[i+1]=='B'&&a[i+2]=='C')
        {
            sum++;
            i+=3;
            
        }
    }
    cout<<sum<<endl;
}

signed main() 
{
    int n,m;
    cin>>n>>m;
    string a;
    cin>>a;
    for(int i=0;i<m;i++)
    {
        int pos;
        char b;
        cin>>pos>>b;
        a[pos-1]=b;
        process(a,n);
    }
    return 0;
}
/*

7 4
ABCDABC
4 B
3 A
5 C
4 G

*/