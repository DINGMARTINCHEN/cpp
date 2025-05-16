#include<bits/stdc++.h>
using namespace std;
struct nnn
{
    int num;
    int hard;
};
bool compare(nnn a,nnn b)
{
    if(a.hard<b.hard)
    {
        return true;
    }
    else if(a.hard==b.hard&&a.num<b.num)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cin>>n;
    nnn a[n];
    for(int i=1;i<=n;i++)
    {
        int aa;
        cin>>aa;
        a[i-1].hard=aa;
        a[i-1].num=i;
    }
    sort(a,a+n,compare);
    for(int i=0;i<n;i++)
    {
        cout<<a[i].num<<" ";
    }
}