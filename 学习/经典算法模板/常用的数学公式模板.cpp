#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e6+50;

struct Comb{
    int mod=1000000009;
    int fact[N],infact[N];  //fact：阶乘  infact：逆元


    int pow(int a,int n)  //快速幂
    {
        int res=1;
        while(n)
        {
            if(n&1) res=res*a%mod;
            n>>=1;
            a=a*a%mod;
        }
        return res%mod;
    }

    void init(int n)  //初始化
    {
        fact[0]=infact[0]=1;
        for(int i=1;i<=n;i++)
        {
            fact[i]=fact[i-1]*i%mod;
            infact[i]=pow(fact[i],mod-2);
        }
    }

    int C(int n,int m)   //组合数
    {
        if(n==m) return 1;
        if(n<m || n<=0) return 0;
        return (fact[n]%mod*infact[m]%mod)%mod*infact[n-m]%mod;
    }
}comb;


signed main()
{
    comb.init(N);
    cout<<comb.C(5,2);
    return 0;
}