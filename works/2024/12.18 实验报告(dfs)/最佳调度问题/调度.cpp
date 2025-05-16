#include <bits/stdc++.h>
#define int long long
using namespace std;

int a[10007],b[10007],minn,n,k;

void dfs(int x,int y)
{
    if(y>=minn) return ;
    if(x==0)
    {
        minn=y;
        return ;
    }
    int vis[1000]={0};
    for(int i=1;i<=k;i++)
    {
        if(vis[b[i]])continue;
        vis[b[i]]=true;
        b[i]+=a[x];
        dfs(x-1,max(y,b[i]));
        b[i]-=a[x];
    }
    return ;
}

int process(int t) 
{
    string name=to_string(t)+".in";
    // cin>>n>>k;
    ifstream infile(name, ios::in);
    memset(b,0,sizeof(b));
    memset(a,0,sizeof(a));
    minn=1e10;


    infile>>n>>k;
    for(int i=1;i<=n;i++)
    {
        infile>>a[i];
    }
    sort(a+1,a+n+1);
    dfs(n,0);
    // cout<<minn;
    infile.close();


    string ansname=to_string(t)+".out";
    ifstream ansin(ansname, ios::in);
    int ans;
    ansin>>ans;
    cout<<"test "<<t<<" result:";
    if(ans==minn)
    {
        cout<<"AC";
    }
    else{
        cout<<"WA";
    }
    cout<<endl<<"      key:"<<ans<<endl<<"      out:"<<minn;
    cout<<endl<<endl;
    ansin.close();
    return 0;
}

signed main()
{
    for(int i=1;i<=11;i++)
    {
        process(i);
    }
    return 0;
}