#include<bits/stdc++.h>
using namespace std;
struct bingo
{
    int data;
    int ttype;
};
bool compare(bingo a,bingo b)
{
    return a.data<b.data;
}
int main()
{
    int n,m;
    cin>>n>>m;
    bingo a[n+m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].data;
        a[i].ttype=1;
    }
    for(int i=n;i<n+m;i++)
    {
        cin>>a[i].data;
        a[i].ttype=2;
    }
    sort(a,a+n+m,compare);
    for(int i=0;i<n+m;i++)
    {
        if(a[i].ttype==1&&a[i+1].ttype==1)
        {
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
}