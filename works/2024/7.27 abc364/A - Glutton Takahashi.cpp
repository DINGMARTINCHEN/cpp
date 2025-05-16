#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main() 
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        string a;
        cin>>a;
        if(a=="sweet")
        {
            sum++;
        }
        else
        {
            sum=0;
        }
        if(sum==2)
        {
            if(i<n)
            {
                cout<<"No";
                return 0;
            }
            else

            {
                cout<<"Yes";
                return 0;
            }
        }
    }
    cout<<"Yes";
    return 0;
}