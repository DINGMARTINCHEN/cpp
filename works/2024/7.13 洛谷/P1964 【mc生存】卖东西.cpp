#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>goods_value;
    map<string,int>goods_gezi;
    map<string,int>goods_sum;
    string s[105];
    int m,n;
    cin>>m;
    for(int i=0;i<n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c>>s[i];
        goods_gezi[s[i]]=c;
        goods_sum[s[i]]+=a;
        goods_value[s[i]]=b;
    }
    for(int i=0;i<21-m;i++)
    {

    }
}
//stl
