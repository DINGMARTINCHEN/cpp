#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=5e5+50;

int n,m;
vector<int> a;

signed main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    while(m--)
    {
        int x;
        cin>>x;
        int pos1=lower_bound(a.begin(),a.end(),x)-a.begin();
        int pos2=upper_bound(a.begin(),a.end(),x)-a.begin();
        if(a[pos1]==x && a[pos2-1]==x)
            cout<<pos1<<' '<<pos2-1<<'\n';
        else cout<<-1<<' '<<-1<<'\n';
    }
}