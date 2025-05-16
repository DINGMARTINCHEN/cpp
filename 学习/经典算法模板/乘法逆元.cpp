//*求解较大的a*b/c 的求模

/*
费马小定理：2^(p-1)%p=1  //a^(p-1) ≡1 (mod p)

费马小定理(Fermat's little theorem)是数论中的一个重要定理，在1636年提出，其内容为： 假如p是质数，且gcd(a,p)=1，那么 a(p-1)≡1（mod p），
即：假如a是整数，p是质数，且a,p互质(即两者只有一个公约数1)，
那么a的(p-1)次方除以p的余数恒等于1。

定理内容简单来说就是：a^(p-1) ≡1 (mod p)
求逆元：两边同除以a 得到 a^(p-2) ≡1/a (mod p)
还敢写1/a 应该是a^(p-2) ≡ inv(a) (mod p)

 *得到公式：inv(a) = a^(p-2) (mod p).
使用条件： p是质数，并且gcd(a,p) = 1.(p,a互质)
*/
typedef long long ll;
using namespace std;
int mod=100000;

ll qpow(ll a,ll b,ll p)
{
    ll tmp = 1;
    a=a%p;
    while(b)
    {
        if(1&b) tmp = tmp*a%p;
        a = a*a%p;
        b>>=1;
    }
    return tmp%p;
}
ll inv(ll a,ll p) //*费马小定理求逆元
{
    return qpow(a,p-2,p);
}

//*例题:求n*(n+1)*(2*n+1)/6 对mod=998244353求模(1<=n<=1e9)


#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <set>
#include <string>
#include <iomanip>
#include <math.h>
#include <vector>
#include <queue>
#include <map>
#include <functional>
#define int long long 
using namespace std;
typedef pair<int, int> pii;
const int N = 1e6 + 10;
int MOD = 998244353;
long long mul_mod(long long a, long long b, long long mod)
{
    long long res = 0;
    while (b > 0) {
        if (b % 2 == 1) {
            res = (res + a) % mod;
        }
        a = (a * 2) % mod;
        b /= 2;
    }
    return res;
}

// 计算 (n * (n + 1) * (2 * n + 1) / 6) % MOD
long long calculate(long long n) {
    // 计算 n * (n + 1)
    long long term1 = mul_mod(n, n + 1, MOD);
    // 计算 2 * n + 1
    long long term2 = (2 * n + 1) % MOD;
    // 计算 n * (n + 1) * (2 * n + 1)
    long long product = mul_mod(term1, term2, MOD);

    // 计算 product / 6
    // 由于 6 和 MOD 互质，可以使用乘法逆元
    long long inv6 = 166374059; // 6 在 MOD 下的逆元
    long long result = mul_mod(product, inv6, MOD);

    return result;
}
void solve()
{
	int k;
	cin >> k;
	//int ans;
	//int mod = 998244353;
	//ans = ((k % mod) * ( (k + 1) % mod ) * ( (2 * k + 1)) % mod ) / 6;
    int ans = calculate(k);
	cout << ans << "\n";
}
signed main()
{ 
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}

