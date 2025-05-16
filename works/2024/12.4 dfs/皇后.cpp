#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,q[30],cnt;
bool na[30],pie[30],col[30],can=true;

void qu(int k)
{
    if(k>n)
    {
        can=false;
        cnt++;
        for(int i=1;i<=n;i++)
        {
            cout<<q[i]<<" ";
        }
        puts("");
        return ;
    }
    for(int i=1;i<=n;i++)
    {
        if(col[i]||na[k+n-i]||pie[k+i])continue;
        col[i]=na[k+n-i]=pie[k+i]=true;
        q[k]=i;
        qu(k+1);
        col[i]=na[k+n-i]=pie[k+i]=false;
    }
}

signed main() 
{
    cin>>n;
    qu(1);
    // cout<<cnt<<endl;
    if(can)
    {
        cout<<"no solute!";
    }
    return 0;
}