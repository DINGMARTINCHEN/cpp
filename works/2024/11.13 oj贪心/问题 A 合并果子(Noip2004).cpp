#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() 
{
    int n;
    cin>>n;
    priority_queue<int,vector<int>,greater<int> >q;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    int sum=0;
    while(q.size()>=2)
    {
        int a=q.top();
        q.pop();
        int b=q.top();
        q.pop();
        sum+=(a+b);
        q.push(a+b);
    }
    cout<<sum;
    return 0;
}