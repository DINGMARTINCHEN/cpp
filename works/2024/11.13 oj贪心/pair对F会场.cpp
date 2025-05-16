#include <bits/stdc++.h>
#define int long long
using namespace std;

priority_queue<int,vector<int>,greater<int> >que;
pair<int,int>a[200010];

signed main() 
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    sort(a+1,a+1+n);
    for(int i=1;i<=n;i++)
    {
        if(que.empty())
        {
            que.push(a[i].second);
        }
        else
        {
            int x=que.top();
            if(a[i].first>=x)
            {
                que.pop();
                que.push(a[i].second);
            }
            else
            {
                que.push(a[i].second);
            }
        }
    }
    cout<<que.size();
    return 0;
}