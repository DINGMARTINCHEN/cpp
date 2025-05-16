#include<bits/stdc++.h>
#define fastin ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
const int N=1e5+50;
const int inf=1e9;
typedef long long ll;
typedef unsigned long long ull;


char a[150][10];

int main()
{
    fastin;
    for(int i=1;i<=9;i++)
        for(int j=1;j<=9;j++)
            cin>>a[i][j];
    int judge=0;
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
            if(a[i][j]=='8' && i>1 && j<9 && i<9 && j>1)
            {
                a[i][j]='0';
                judge=1;
            }
        }
        if(judge) break;
    }
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
            if(a[i][j]=='0')
                cout<<8;
            else cout<<'*';
        }
        cout<<'\n';
    }
}
// 123647859
// 648295317
// 795831642
// 436578921
// 981462573
// 257913486
// 319754268
// 572386194
// 864129735