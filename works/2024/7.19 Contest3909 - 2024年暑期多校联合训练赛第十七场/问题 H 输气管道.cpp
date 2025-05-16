#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    ull n;
    cin>>n;
    int k;
    cin>>k;
    ull maxn=0;
    ull minn=n;
    for(int i=0;i<k;i++)
    {
        ull c;
        cin>>c;
        maxn=max(maxn,c);
        minn=min(minn,c);
        if(i!=0)
        {
            cout<<maxn-minn<<endl;
        }
        
    }
    return 0;
}
