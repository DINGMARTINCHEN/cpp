#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+50;

int n;
struct node
{
    int len,num;
}a[N];
vector<int> v;

bool cmp(node aa,node bb)
{
    return aa.len>bb.len;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].len;
        a[i].num=i;
    }
    sort(a+1,a+1+n,cmp);
    int maxn=-1;
    int pos=0;
    for(int i=1;i<=n;i++)
    {
        if(maxn<=i*i*a[i].len)
        {
            maxn=i*i*a[i].len;
            pos=i;
        }
    }
    for(int i=1;i<=pos;i++) v.push_back(a[i].num);
    sort(v.begin(),v.end());
    cout<<v.size()<<'\n';
    for(int i=0;i<v.size();i++) cout<<v[i]<<' ';
}