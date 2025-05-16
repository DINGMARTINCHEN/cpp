#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n;
    cin>>n;

    priority_queue<int>a,b;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        a.push(num);
    }
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        b.push(num);
    }
    unsigned long long sum=0;
    for(int i=0;i<n;i++)
    {
        int aa,bb;
        aa=a.top();
        bb=b.top();
        a.pop();
        b.pop();
        sum+=(aa*bb);
    }
    cout<<sum;
}