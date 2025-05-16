#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N=2e5+10;

int u[N],d[N];

void process()
{
    int n;
    cin>>n;
    int uu=0,dd=0;
    // memset(u,0,sizeof(u));
    // memset(d,0,sizeof(d));
    for(int i=0;i<=n+1;i++)
    {
        u[i]=d[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        if(b==0)
        {
            d[a+1]=1;
            dd++;
        }
        else
        {
            u[a+1]=1;
            uu++;
        }
    }
    int sum=0;
    for(int i=1;i<=n+1;i++)
    {
        if(u[i]==1&&d[i]==1&&uu>=2)
        {
            sum+=uu-1;
        }
        // cout<<sum<<"======="<<i<<endl;
        if(u[i]==1&&d[i]==1&&dd>=2)
        {
            sum+=dd-1;
        }
        // cout<<sum<<"======="<<i<<endl;
        if(u[i]==1&&d[i-1]==1&&d[i+1]==1)
        {
            sum++;
        }
        // cout<<sum<<"======="<<i<<endl;
        if(d[i]==1&&u[i-1]==1&&u[i+1]==1)
        {
            sum++;
        }
        // cout<<sum<<"======="<<i<<endl;
    }
    cout<<sum<<endl;
}

signed main() 
{
    int n;
    cin>>n;
    while(n--)
    {
        process();
    }
    return 0;
}
/*

3
18
0 0
0 1
2 1
4 0
4 1
5 1
6 0
6 1
7 0
7 1
8 1
9 1
11 1
13 0
13 1
14 0
15 0
16 0
26
0 0
1 0
1 1
2 1
3 1
5 0
5 1
6 1
7 1
8 1
9 0
10 1
12 0
13 1
14 0
15 0
16 0
16 1
18 1
20 0
22 1
23 0
23 1
24 0
24 1
25 0
33
0 1
1 1
3 0
3 1
4 0
5 0
6 0
6 1
7 0
7 1
9 1
10 0
11 0
12 1
14 1
15 1
16 0
16 1
17 1
18 0
18 1
19 0
20 0
20 1
21 1
23 1
24 1
26 1
27 0
27 1
29 0
31 0
32 1


*/

/*

1
18
0 0
0 1
2 1
4 0
4 1
5 1
6 0
6 1
7 0
7 1
8 1
9 1
11 1
13 0
13 1
14 0
15 0
16 0



*/