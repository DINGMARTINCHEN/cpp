#include<bits/stdc++.h>
using namespace std;
struct farmer
{
    long long price;
    long long provide;
};
bool compare(farmer x,farmer y)
{
    if(x.price<y.price)
    {
        return true;
    }
    else
    {
        return false;
    }
}
    long long t,over;
    long long sum=0;
    int m,n;
int main()
{
    
    cin>>m>>n;
    farmer worker[9999];
    for(long long i=0;i<n;i++)
    {
        cin>>worker[i].price>>worker[i].provide;
    }
    sort(worker,worker+n,compare);
    for(long long i=0;i<n;i++)
    {
        m=m-worker[i].provide;
        sum=sum+worker[i].provide*worker[i].price;
        if(m<=0)
        {
            t=i;
            over=-m;
            break;
        }
    }
    cout<<sum-(over*worker[t].price);
}